const fs = require("fs/promises");
const path = require("path");

// crud oparations by synchronous mathod

// Define file name and path
const fileName = "promises.txt";
const filePath = path.join(__dirname, fileName);

// Write to the file (uncomment if needed)
// fs.writeFile(filePath, "i am suraj jaiswal.", "utf8")
//   .then(console.log("done"))
//   .catch((error) => {
//     console.log(error);
//   });

// Read the file correctly (uncomment if needed)
// fs.promises
//   .readFile(filePath, "utf8")
//   .then((data) => {
//     console.log(data);
//   })
//   .catch((error) => {
//     console.log(error);
//   });

// append data in file  (uncomment if needed)
// fs.appendFile(filePath, " \ni am doing crud oparation by promises ", "utf8")
//   .then(console.log("done"))
//   .catch((error) => {
//     console.log(error);
//   });

// delete file  (uncomment if needed)
// fs.promises
//   .unlink(filePath)
//   .then(console.log("done"))
//   .catch((error) => {
//     console.log(error);
//   });

// rename file name
// const fileNewName = "updatedtext.txt";
// const fileNewPath = path.join(__dirname, fileNewName);
// fs.promises
//   .rename(filePath, fileNewPath)
//   .then(console.log("done"))
//   .catch((error) => {
//     console.log(error);
//   });




//we can use promises mathode from two way frist erite every time when you write fs mathode and second import fs with promises "fs/promises"
