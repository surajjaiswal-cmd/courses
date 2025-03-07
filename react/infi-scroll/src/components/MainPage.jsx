import { useEffect } from "react";
import { useInfiniteQuery } from "@tanstack/react-query";
import { useInView } from "react-intersection-observer";
import { DataCrud } from "./DataCRUD";
import { ErrorFound } from "./ErrorFound";
import { getPost } from "../api/PostApi";

export const MainPage = () => {
  const { data, error, isLoading, hasNextPage, fetchNextPage } =
    useInfiniteQuery({
      queryKey: ["posts"],
      queryFn: ({ pageParam = 1 }) => getPost(pageParam), // Pass `pageParam` for pagination
      getNextPageParam: (lastPage, allPages) => {
        return lastPage.length < 10 ? undefined : allPages.length + 1;
      },
    });

  const { ref, inView } = useInView();

  useEffect(() => {
    if (inView && hasNextPage) {
      fetchNextPage();
    }
  }, [inView, hasNextPage, fetchNextPage]);

  const posts = data?.pages?.flat() || [];

  return (
    <>
      {isLoading ? (
        <div className="container text-center fs-5 mt-5">Loading...</div>
      ) : error ? (
        <ErrorFound msg={error.message} />
      ) : (
        <>
          <ol className="p-0">
            <DataCrud data={posts} />
          </ol>
          {hasNextPage && (
            <div ref={ref} className="text-center mt-3">
              <span>Loading more...</span>
            </div>
          )}
        </>
      )}
    </>
  );
};
