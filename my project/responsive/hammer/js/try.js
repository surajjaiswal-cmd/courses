
// Define functions for full width and medium width logic
function applyFullWidthLogic() {
  console.log("Applying full width logic");
  // Add your full width logic here
}

function applyMediumWidthLogic() {
  console.log("Applying medium width logic");
  // Add your medium width logic here
}

// Function to check and apply appropriate logic
function checkWidth() {
  if (window.matchMedia("(min-width: 1000px)").matches) {
    applyFullWidthLogic();
  } else {
    applyMediumWidthLogic();
  }
}

// Initial check
checkWidth();

// Add event listener for window resize
window.addEventListener("resize", checkWidth);
