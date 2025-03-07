import { useDispatch, useSelector } from "react-redux";
import { deleteTask } from "./ReducerStore";

export let Todos = () => {
  let tasks = useSelector((state) => state.tasks);

  let dispatch = useDispatch();

  let handleDelete = (index) => {
    return dispatch(deleteTask(index));
  };

  return (
    <ol className="list-group mt-3 list-group-numbered">
      {tasks.map((task, index) => {
        return (
          <li
            key={index}
            className="list-group-item d-flex justify-content-between list-group-item-primary mt-1">
            <p className="">{task}</p>
            <button
              className="btn btn-danger rounded-0"
              onClick={() => handleDelete(index)}>
              Delete
            </button>
          </li>
        );
      })}
    </ol>
  );
};



