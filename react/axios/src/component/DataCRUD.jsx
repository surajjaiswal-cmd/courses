/* eslint-disable react/prop-types */
import { useEffect, useState } from "react";
import { deletePost, putData } from "../api/PostApi";

export const DataCrud = ({ posts, setPosts }) => {
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
    posts.forEach((post) => {
      if (bgColors[post.id]) {
        colors[post.id] = bgColors[post.id];
      } else {
        colors[post.id] = `#${randomString()}50`;
      }
    });
    setBgColors(colors);
  }, [posts]);

  const addPutData = async (id, updatedPost) => {
    try {
      let res = await putData(id, updatedPost);
      // this part of code neded when you add a edit button and after edit you want to update the post but in this case we are not using this. we update the post directly in the textarea
      // if (res.status === 200) {
      //   const newUpdatedPosts = posts.map((post) =>
      //     post.id === res.id ? res.data : post
      //   );
      //   setPosts(newUpdatedPosts);
      // }
    } catch (error) {
      console.log(`Put Data Error: ${error}`);
    }
  };

  const handleOnChange = (e, id) => {
    const { name, value } = e.target;
    const updatedPosts = posts.map((post) =>
      post.id === id ? { ...post, [name]: value } : post
    );
    setPosts(updatedPosts);

    const updatedPost = updatedPosts.find((post) => post.id === id);
    addPutData(id, updatedPost);
  };

  const deleteNote = async (id) => {
    try {
      const res = await deletePost(id);
      if (res.status === 200) {
        const newData = posts.filter((post) => post.id !== id);
        setPosts(newData);
      }
    } catch (error) {
      console.error(error);
    }
  };

  return (
    <>
      {posts.map((post) => {
        const { id, title, body } = post;
        return (
          <div
            className="p-3 rounded-1 border"
            key={id}
            style={{
              backgroundColor: bgColors[id],
            }}>
            <li className="ms-3"></li>
            <textarea
              className="comment"
              name="title"
              rows="auto"
              cols="auto"
              value={title}
              onChange={(e) => handleOnChange(e, id)}></textarea>
            <br />
            <textarea
              className="comment"
              name="body"
              rows="5"
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
