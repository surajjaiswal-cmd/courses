import { useState } from "react";

function LiftUpState() {
  let [inputName, setInputName] = useState("");

  return (
    <div
      className=" text-center"
      style={{
        padding: "20px",
        border: "1px solid #ccc",
        marginTop: "1rem",
      }}>
      <h1 className="mb-5">
        <u>liftStateUp</u>
      </h1>
      <InputEvent inputName={inputName} setInputName={setInputName} />
      <OutputEvent inputName={inputName} />
    </div>
  );
}
export default LiftUpState;

function InputEvent({ inputName, setInputName }) {
  //   let [inputName, setInputName] = useState(""); send this value to parents ang get it back as props

  return (
    <>
      <input
        type="text"
        placeholder="Enter your name"
        value={inputName}
        onChange={(e) => setInputName(e.target.value)}
      />
    </>
  );
}

function OutputEvent({ inputName }) {
  return (
    <>
      <h3 className=" mt-2"> enterd name is: {inputName}</h3>
    </>
  );
}

// lift up state in react
// "Lifting up state" in React is a technique where state is moved up to a common parent component so that it can be shared between multiple child components. This is commonly used when you have two or more components that need to share state or when you want to have a single source of truth for state management.