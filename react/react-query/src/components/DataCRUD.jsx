import { useEffect, useState } from "react";
import { deletePost, putData } from "../api/PostApi";
import { useMutation } from "@tanstack/react-query";

export const DataCrud = ({ data, setData, preNext }) => {
  const [bgColors, setBgColors] = useState({});

  const randomString = () => {
    const length = 6;
    const characters = "0123456789ABCDEF";
    let result = "";
    for (let i = 0; i < length; i++) {
      const randomIndex = Math.floor(Math.random() * characters.length);
      result += characters.charAt(randomIndex);
    }
    return result;
  };

  useEffect(() => {
    const colors = {};
    if (Array.isArray(data)) {
      data.forEach((post) => {
        if (bgColors[post.id]) {
          colors[post.id] = bgColors[post.id];
        } else {
          colors[post.id] = `#${randomString()}50`;
        }
      });
    }
    setBgColors(colors);
  }, [data]);

  //using react query to update post
  const updateDataMutation = useMutation({
    mutationFn: (updatedPost) => putData(updatedPost.id, updatedPost),
    onSuccess: (updatedPost) => {
      setData((prevData) =>
        prevData.map((post) =>
          post.id === updatedPost.id ? updatedPost : post
        )
      );
    },
    onError: (error) => {
      console.error("Error updating post:", error);
    },
  });

  const addPutData = (updatedPost) => {
    updateDataMutation.mutate(updatedPost);
  };

  const handleOnChange = (e, id) => {
    const { name, value } = e.target;
    const updatedData = data.map((post) =>
      post.id === id ? { ...post, [name]: value } : post
    );
    setData(updatedData);

    const updatedPost = updatedData.find((post) => post.id === id);
    addPutData(updatedPost);
  };

  //using react quary to delete post
  const deleteNoteMutation = useMutation({
    mutationFn: (id) => deletePost(id),
    onSuccess: (_, id) => {
      setData((prevData) => prevData.filter((post) => post.id !== id));
    },
    onError: (error) => {
      console.error("Error deleting post:", error);
    },
  });

  const deleteNote = (id) => {
    deleteNoteMutation.mutate(id);
  };
  return (
    <>
      {data.map((post, index) => {
        const { id, title, body } = post;
        return (
          <div
            className="p-3 my-2  rounded-1 border"
            key={id}
            style={{
              backgroundColor: bgColors[id],
            }}>
            <div className="list-item">{preNext + index + 1}.</div>
            <textarea
              className="comment"
              name="title"
              rows="1"
              cols="auto"
              value={title}
              onChange={(e) => handleOnChange(e, id)}></textarea>
            <br />
            <textarea
              className="comment"
              name="body"
              rows="auto"
              cols="auto"
              value={body}
              onChange={(e) => handleOnChange(e, id)}></textarea>
            <br />
            <button className="btn p-0" onClick={() => deleteNote(id)}>
              Delete
            </button>
          </div>
        );
      })}
    </>
  );
};
