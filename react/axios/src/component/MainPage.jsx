import { useEffect, useState } from "react";
import { getPost } from "../api/PostApi";
import { DataCrud } from "./DataCRUD";
import { Form } from "./Form";

export const MainPage = () => {
  const [posts, setPosts] = useState([]);

  useEffect(() => {
    const fetchData = async () => {
      try {
        const res = await getPost();
        setPosts(res.data); // Update state with the fetched data
      } catch (error) {
        console.error("Error fetching posts:", error);
      }
    };

    fetchData();
  }, []);

  return (
    <>

      <Form posts={posts} setPosts={setPosts} />
      <ol className="p-0" >
        <DataCrud posts={posts} setPosts={setPosts} />
      </ol>
    </>
  );
};

// this app only example of fetching data using axios
// when you relode the page after add some data your data will remove if you want to store the data then use local storage to save your added data



