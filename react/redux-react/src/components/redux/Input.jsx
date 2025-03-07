import { useState } from "react";
import { useDispatch } from "react-redux";
import { addTask } from "./ReducerStore";
export let Input = () => {
  let [data, setData] = useState("");

  let dispatch = useDispatch();

  let handelSubmit = (e) => {
    e.preventDefault();
    dispatch(addTask(data));
    setData("");
  };

  return (
    <form
      className="d-flex justify-content-between align-content-center bg-light p-3"
      onSubmit={handelSubmit}>
      <input
        type="text"
        className="form-control w-75"
        placeholder="Add Task"
        value={data}
        onChange={(e) => setData(e.target.value)}
      />
      <button type="submit" className="btn btn-primary">
        Add Task
      </button>
    </form>
  );
};
