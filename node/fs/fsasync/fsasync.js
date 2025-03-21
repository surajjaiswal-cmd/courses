const fs = require("fs");
const path = require("path");

// crud oparations by asynchronous mathod

// Define file name and path
const fileName = "text.txt";
const filePath = path.join(__dirname, fileName);

// Write to the file (uncomment if needed)
// const creatFile = fs.writeFile(
//   filePath,
//   "this side suraj jaiswal from dewas.",
//   "utf8",
//   (error) => {
//     if (error) console.log(error);
//     else console.log("done");
//   }
// );

// Read the file correctly (uncomment if needed)
// const readFile = fs.readFile(filePath, "utf8", (error,data) => {
//   if (error) console.log(error);
//   else console.log(data);
// });

// append data in file  (uncomment if needed)
// const appendFile = fs.appendFile(
//   filePath,
//   " \ni am doing crud oparation by asynchronous mathod ",
//   "utf8",
//   (error) => {
//     if (error) console.log(error);
//     else console.log("done");
//   }
// );

// delete file  (uncomment if needed)
// const deleteFile = fs.unlink(filePath, (error) => {
//   if (error) console.log(error);
//   else console.log("done");
// });

// rename file name
const fileNewName = "updatedtext.txt";
const fileNewPath = path.join(__dirname, fileNewName);
const renamefile = fs.rename(filePath, fileNewPath, (error) => {
  if (error) {
    console.log("Error renaming file:", error);
  } else {
    console.log("File renamed successfully!");
  }
});
