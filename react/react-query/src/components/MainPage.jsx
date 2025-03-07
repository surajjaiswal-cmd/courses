import { useState, useEffect } from "react";
import { DataCrud } from "./DataCRUD";
import { Form } from "./Form";
import { getPost } from "../api/PostApi";
import { keepPreviousData, useQuery } from "@tanstack/react-query";
import { ErrorFound } from "./ErrorFound";

export const MainPage = () => {
  const [data, setData] = useState([]);
  const [preNext, setPreNext] = useState(0);
  const limitPn = 5; // Number of items per page

  // using react query to fetch post data
  const {
    data: queryData,
    error,
    isLoading,
  } = useQuery({
    queryKey: ["posts"],
    queryFn: () => getPost(),
    placeholderData: keepPreviousData,
    // placeholderData: keepPreviousData, //keepPreviousData is used to keep the previous data while fetching new data.
    // gcTime: 1000, //for garbage collection to clean up inactive queries. default is 300000ms.(5-minutes)
    // staleTime: 5000, //for queries to remain fresh before becoming stale.
    // refetchInterval: 1000, //for automatically refetching data.
    // refetchIntervalInBackground: true, //Allows refetching of data even when the application is in the background.
  });



  useEffect(() => {
    if (queryData) {
      setData(queryData);
    }
  }, [queryData]);

  const totalData = data.length;
  const totalPage = Math.ceil(totalData / limitPn); // Calculate total pages

  if (isLoading)
    return <div className="container text-center fs-5 mt-5">Loading...</div>;
  if (error)
    return (
      <div>
        <ErrorFound msg={error.message} />
      </div>
    );

  const currentPageData = data.slice(preNext, preNext + limitPn); // Get data for the current page

  return (
    <>
      <Form data={data} setData={setData} />
      <ol className="p-0">
        <DataCrud data={currentPageData} setData={setData} preNext={preNext} />
      </ol>
      {/* for pagination */}
      <div className="text-center d-flex justify-content-center">
        <button
          disabled={preNext <= 0}
          className="btn btn-primary py-0 rounded-0"
          onClick={() => setPreNext((pre) => Math.max(pre - limitPn, 0))}>
          Pre
        </button>
        <h4 className="px-3">
          <u>
            {Math.floor(preNext / limitPn) + 1} OF {totalPage}
          </u>
        </h4>
        <button
          disabled={preNext >= totalData - limitPn}
          className="btn btn-primary py-0 rounded-0"
          onClick={() =>
            setPreNext((pre) => Math.min(pre + limitPn, totalData - limitPn))
          }>
          Next
        </button>
      </div>
    </>
  );
};
