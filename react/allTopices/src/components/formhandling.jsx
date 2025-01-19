import { useState } from "react";

export function Formahandle() {
  let [user, setUser] = useState({
    fristName: "",
    lastName: "",
    email: "",
    phoneNumber: "",
    password: "",
  });

  const handelInputChange = (e) => {
    const { name, value } = e.target;
    setUser((pre) => ({ ...pre, [name]: value })); //make name daynamiclly to store previous data same
  };
  function handelSubmite(event) {
    event.preventDefault();
  }
  return (
    <div
      style={{
        padding: "20px",
        border: "1px solid #ccc",
        marginTop: "1rem",
      }}>
      <div
        style={{
          width: "40%",
          margin: "0 auto",
          border: "1px solid #ccc",
        }}>
        <h2 className="text-center mt-3">
          <u>Form Handling</u>
        </h2>
        <form className="p-3" onSubmit={handelSubmite}>
          <h3> Sing Up</h3>
          <p>Please fill this form to login</p>
          <label className="mt-3" htmlFor="fristName">
            <b>Frist Name</b>
          </label>
          <br />
          <input
            type="text"
            name="fristName"
            placeholder="Enter Frist Name"
            required
            value={user.fristName}
            onChange={handelInputChange}
            style={{
              width: "95%",
              backgroundColor: "#d5edfd",
              border: "0",
              paddingLeft: "1rem",
            }}
          />
          <label className="mt-3" htmlFor="lastName">
            <b>Last Name</b>
          </label>
          <br />
          <input
            type="text"
            name="lastName"
            placeholder="Enter last Name"
            required
            value={user.lastName}
            onChange={handelInputChange}
            style={{
              width: "95%",
              backgroundColor: "#d5edfd",
              border: "0",
              paddingLeft: "1rem",
            }}
          />
          <label className="mt-3" htmlFor="email">
            <b>Email</b>
          </label>
          <br />
          <input
            type="text"
            name="email"
            placeholder="Enter email"
            required
            value={user.email}
            onChange={handelInputChange}
            style={{
              width: "95%",
              backgroundColor: "#d5edfd",
              border: "0",
              paddingLeft: "1rem",
            }}
          />
          <label className="mt-3" htmlFor="password">
            <b>Password</b>
          </label>
          <br />
          <input
            type="text"
            name="password"
            placeholder="Enter password"
            required
            value={user.password}
            onChange={handelInputChange}
            style={{
              width: "95%",
              backgroundColor: "#d5edfd",
              border: "0",
              paddingLeft: "1rem",
            }}
          />
          <label className="mt-3" htmlFor="phoneNumber">
            <b>Phone Number</b>
          </label>
          <br />
          <input
            type="number"
            name="phoneNumber"
            placeholder="Enter phoneNumber"
            required
            value={user.phoneNumber}
            onChange={handelInputChange}
            style={{
              width: "95%",
              backgroundColor: "#d5edfd",
              border: "0",
              paddingLeft: "1rem",
            }}
          />
          <center>
            <button type="submite" className=" btn btn-primary py-0 mt-3 px-5">
              Sing Up
            </button>
          </center>
        </form>
      </div>
    </div>
  );
}
