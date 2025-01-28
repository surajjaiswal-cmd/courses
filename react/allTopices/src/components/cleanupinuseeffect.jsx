import { useState, useEffect } from "react";
export function Cleanup() {
  const [count, setCount] = useState(0);
  useEffect(() => {
    // Set up a timer
    const timer = setInterval(() => {
      setCount((prevCount) => prevCount + 1);
    }, 1000);
    // Cleanup function
    return () => {
      clearInterval(timer); // Clear the timer
    };
  }, []);
  //   Empty dependency array means this effect runs only once after initial render
  return (
    <div
      className=" text-center"
      style={{
        padding: "20px",
        border: "1px solid #ccc",
        marginTop: "1rem",
      }}>
      <h2>
        <u> Cleanup in useEffect</u>
      </h2>
      <p>Timer: {count} seconds</p>
    </div>
  );
}
// cleanup function in use effect
// The cleanup function in the useEffect hook is a way to clean up or undo side effects to avoid memory leaks and other issues. It runs before the effect is re-executed or when the component is unmounted. This is particularly useful for unsubscribing from subscriptions, clearing timers, or cleaning up other resources.