import { Input } from "./Input";
import { Todos } from "./Todos";

export const Reducer = () => {
  return (
    <div className="w-50 mx-auto">
      <h4>ToDo</h4>
      <Input />
      <Todos />
    </div>
  );
};
