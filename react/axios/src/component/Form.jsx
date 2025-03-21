/* eslint-disable react/prop-types */
import { useState } from "react";
import { postData } from "../api/PostApi";

export const Form = ({ posts, setPosts }) => {
  let [addData, setAddData] = useState({
    title: "",
    body: "",
  });

  let randomNumber = () => Math.floor(1000 + Math.random() * 9000);

  let handelOnChange = (e) => {
    let name = e.target.name;
    let value = e.target.value;
    setAddData((pre) => ({ ...pre, [name]: value }));
  };

  let addPostData = async () => {
    // Generate a unique id and add it to the new post data
    let newPostData = { ...addData, id: randomNumber() };

    try {
      let res = await postData(newPostData);

      if (res.status === 201) {
        setPosts([newPostData, ...posts]);
        setAddData({ title: "", body: "" });
      }
    } catch (error) {
      console.log(`Post Data Error : ${error}`);
    }
  };

  let handelSubmite = (e) => {
    e.preventDefault();
    addPostData();
  };

  return (
    <form
      className="text-center my-4 py-2 rounded-1 container"
      onSubmit={handelSubmite}>
      <input
        type="text"
        name="title"
        placeholder="Add Title"
        className="rounded-1 w-25"
        value={addData.title}
        onChange={handelOnChange}
      />
      <input
        type="text"
        name="body"
        placeholder="Add Post"
        className="mx-3 rounded-1 w-50"
        value={addData.body}
        onChange={handelOnChange}
      />
      <button type="submit" className="add-btn rounded-1">
        Add
      </button>
    </form>
  );
};