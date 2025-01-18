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
      style={{ padding: "20px", border: "1px solid #ccc" }}
      className="text-center">
      <h1>
        <u>short-circuit evaluation</u>
      </h1>
      <h2>User Profile</h2>

      {/* Conditional Rendering */}
      {isLoggedIn ? (
        <div>
          <p>Name: {user.name}</p>
          <p>Age: {user.age}</p>
          <button onClick={toggleLogin}>Logout</button>
        </div>
      ) : (
        <div>
          <p>Please log in to see your profile.</p>
          <button onClick={toggleLogin}>Login</button>
        </div>
      )}
    </div>
  );
};

export default UserProfile;
