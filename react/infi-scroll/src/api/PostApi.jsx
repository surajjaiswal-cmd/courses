import axios from "axios";

let api = axios.create({
  baseURL: "https://jsonplaceholder.typicode.com",
});

//get method used to fetch data of the  post
export const getPost = async ({ pageParam = 1 }) => {
  try {
    let res = await api.get(
      `/posts?per_page=10&page=${pageParam}_start=0&_limit=10`
    );
    console.log(res);

    return res.status === 200 ? res.data : [];
  } catch (error) {
    console.log(`Get Data Error : ${error}`);
  }
};
