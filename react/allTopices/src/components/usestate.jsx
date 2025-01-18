import { useState } from "react";
function UseState() {
  const [count, setCount] = useState(0);

  function handelButtonIncrement() {
    setCount(count + 1);
  }
  function handelButtondecrement() {
    setCount(count - 1);
  }
  return (
    <>
      <center
        style={{
          padding: "20px",
          border: "1px solid #ccc",
          marginTop: "1rem",
        }}>
        <h1 className="mb-5">
          <u>useState</u>
        </h1>
        <button onClick={handelButtonIncrement} className="btn btn-primary">
          Increment
        </button>
        <h3 className="m-4">Count: {count}</h3>
        <button onClick={handelButtondecrement} className="btn btn-secondary">
          Decrement
        </button>
      </center>
    </>
  );
}
export default UseState;
