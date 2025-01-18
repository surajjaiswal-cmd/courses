import React, { useState } from "react";

function EventHandel() {
  let [alertMag, setMsg] = useState("");
  function handelButtoneEvent() {
    setMsg("button 1 clicked");
  }
  const handelButtoneEvent2 = (name) => {
    setMsg(`button 2 clicked by ${name}`);
  };

  return (
    <>
      <center
        style={{
          padding: "20px",
          border: "1px solid #ccc",
          marginTop: "1rem",
        }}>
        <h2 className="mt-5">
          <u>Event hendler</u>
        </h2>

        <button onClick={handelButtoneEvent} className="my-5">
          click me 1
        </button>
        <br />
        {/* to pass argumetns we need to use errow function */}
        <button onClick={() => handelButtoneEvent2("alex")}> click me 2</button>
        <div className="mt-5">{alertMag}</div>
      </center>
    </>
  );
}

export default EventHandel;
