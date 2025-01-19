import React, { useState } from "react";

const UserProfile = () => {
  // State variables
  const [isLoggedIn, setIsLoggedIn] = useState(false);
  const [user, setUser] = useState({ name: "John Doe", age: 30 });

  // Toggle login status
  const toggleLogin = () => {
    setIsLoggedIn(!isLoggedIn);
  };

  return (
    <div
      style={{ padding: "20px", border: "1px solid #ccc", marginTop: "1rem" }}
      className="text-center">
      <h1>
        <u>short-circuit evaluation</u>
      </h1>
      <h2>User Profile</h2>

      {isLoggedIn && (
        <div>
          <p>Name: {user.name || "Unknown"}</p>
          <p>Age: {user.age || "Not available"}</p>
          <button onClick={toggleLogin}>Logout</button>
        </div>
      )}

      {!isLoggedIn && (
        <div>
          <p>Please log in to see your profile.</p>
          <button onClick={toggleLogin}>Login</button>
        </div>
      )}
    </div>
  );
};

export default UserProfile;
