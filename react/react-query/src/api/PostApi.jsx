import axios from "axios";

let api = axios.create({
  baseURL: "https://jsonplaceholder.typicode.com",
});

//get method used to fetch data of the  post
export const getPost = async () => {
  try {
    let res = await api.get(`/posts`);
    return res.status === 200 ? res.data : [];
  } catch (error) {
    console.log(`Get Data Error : ${error}`);
  }
};
// delete method used to remove data in  post
export const deletePost = async (id) => {
  try {
    let res = await api.delete(`/posts/${id}`);
    return res.status === 204 ? console.log(res.data) : [];
  } catch (error) {
    console.log(`Delete Data Error : ${error}`);
  }
};
// post method used to add data in  post

export const postData = async (data) => {
  try {
    let res = await api.post(`/posts`, data);
    return res.status === 201 ? res.data : [];
  } catch (error) {
    console.log(`Post Data Error : ${error}`);
  }
};

// put method used to update all data of the post
export const putData = (id, data) => {
  let res = api.put(`/posts/${id}`, data);
  return res.status === 200 ? res.data : [];
};

