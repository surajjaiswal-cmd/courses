let isMouseDown = false; // Track if the mouse is down
let isHolding = false; // Track if the mouse is held
let holdTimeout; // Store the timeout for detecting hold

const element = document.querySelector(".target-element"); // Replace with your target

element.addEventListener("mousedown", (e) => {
  isMouseDown = true;

  // Start a timeout to detect holding
  holdTimeout = setTimeout(() => {
    if (isMouseDown) {
      isHolding = true; // Set holding flag
      console.log("Mouse is being held down!");
      // Add any additional logic for holding here
    }
  }, 500); // Adjust the duration (in milliseconds) for detecting hold
});

element.addEventListener("mouseup", (e) => {
  isMouseDown = false;

  if (isHolding) {
    console.log("Mouse was held and released!");
    isHolding = false; // Reset holding state
  } else {
    console.log("Mouse was clicked!");
  }

  // Clear the timeout to prevent false holding detection
  clearTimeout(holdTimeout);
});

element.addEventListener("mousemove", (e) => {
  if (isMouseDown && !isHolding) {
    console.log("Mouse is dragging...");
    // Add drag logic here if needed
  }
});
