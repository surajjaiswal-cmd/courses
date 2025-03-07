import { useState } from "react";
import { postData } from "../api/PostApi";
import { useMutation } from "@tanstack/react-query";

export const Form = ({
  data,
  setData,
  // limit, setLimit
}) => {
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

  // this is the old way of adding post data but slow

  // let addPostData = async () => {
  //   try {
  //     let res = await postData(newPostData, limit);
  //     if (res.status === 201) {
  //       setData([newPostData, ...data]);
  //       setAddData({ title: "", body: "" });
  //     }
  //   } catch (error) {
  //     console.log(`Post Data Error : ${error}`);
  //   }
  // };

  let newPostData = { ...addData, id: randomNumber() };
  const addPostMutation = useMutation({
    mutationFn: (newPostData) => postData(newPostData),
    // not updating result to data beacuse value is not updatade on server
    onSuccess: (result) => {
      setData([newPostData, ...data]);
      setAddData({ title: "", body: "" });
    },
  });

  let handleSubmit = (e) => {
    e.preventDefault();
    addPostMutation.mutate(newPostData);
  };

  return (
    <form
      className="text-center my-4 py-2 rounded-1 container"
      onSubmit={handleSubmit}>
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
