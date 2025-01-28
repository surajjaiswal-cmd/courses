import React, { useState, useEffect } from "react";

export function UseEffect() {
  const [count, setCount] = useState(0);

  useEffect(() => {
    // This code runs after every render
    // document.title = `You clicked ${count} times`;
    console.log(`You clicked ${count} times`);

    // Cleanup function (optional)
    // return () => {
    // This code runs before the component is removed from the DOM
    // };
  }, [count]); // Dependency array

  return (
    <div
      className=" text-center"
      style={{
        padding: "20px",
        border: "1px solid #ccc",
        marginTop: "1rem",
      }}>
      <h2>
        <u> UseEffect</u>
      </h2>
      <p>You clicked {count} times</p>
      <button onClick={() => setCount(count + 1)}>Click me</button>
    </div>
  );
}

// useEffect in jsx
// The useEffect hook is one of the most powerful hooks in React. It allows you to perform side effects in your components. Think of it as a way to tell React that your component needs to do something after it renders.
