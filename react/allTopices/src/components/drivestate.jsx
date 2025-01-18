import { useState } from "react";

function DriveState() {
  let [count, setCount] = useState([
    { name: "suraj", age: 20 },
    { name: "yaswant", age: 19 },
    { name: "nikhil", age: 18 },
    { name: "anurag", age: 16 },
    { name: "netik", age: 15 },
  ]);
  let totalStudents = count.length; // total students is a deive state because it is derived from the count state
  let avrageAge = parseInt(
    count.reduce((accu, currvalue) => accu + currvalue.age, 0) / count.length
  );
  return (
    <>
      <div
        className=" text-center"
        style={{
          padding: "20px",
          border: "1px solid #ccc",
          marginTop: "1rem",
        }}>
        <h1 className="mb-5">
          <u>drivestate</u>
        </h1>
        <h2>Student Details</h2>
      
        <ul className="list-unstyled">
          {count.map((item, index) => {
            return (
              <li key={index}>
                <h3>
                  Name: {item.name}, Age: {item.age} years
                </h3>
              </li>
            );
          })}
          ;
        </ul>
        <hr />
        <h4>Total Students : {totalStudents}</h4>
        <h4>Avrage Age : {avrageAge}</h4>
      </div>
    </>
  );
}
export default DriveState;

// // Derived State in React.js
// Derived state in React.jsrefers to state that is calculated or derived from props or other state variables within a component. It's not independently maintained but instead depends on other sources of data. Here’s a deeper dive:

// Key Concepts:
// Avoid Redundant State: If you can derive state from props or other state variables, do it during rendering or within methods rather than storing it in the component's state. This practice reduces bugs and inconsistencies.
