import axios from "axios";

let api = axios.create({
  baseURL: "https://jsonplaceholder.typicode.com",
});
//get method used to fetch data of the  post
export const getPost = () => {
  return api.get(`/posts?_start=0&_limit=6`);
};
// delete method used to remove data in  post
export const deletePost = (id) => {
  return api.delete(`/posts/${id}`);
};
// post method used to add data in  post

export const postData = (data) => {
  return api.post("/posts", data);
};

// put method used to update all data of the post
export const putData = (id, data) => {
  return api.put(`/posts/${id}`, data);
};
