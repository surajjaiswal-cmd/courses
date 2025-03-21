const fs = require("fs");
const path = require("path");

// crud oparations by synchronous mathod


// Define file name and path
const fileName = "text.txt";
const filePath = path.join(__dirname, fileName);

// Write to the file (uncomment if needed)
const creatFile = fs.writeFileSync(
  filePath,
  "this side suraj jaiswal from dewas",
  "utf8"
);

// Read the file correctly (uncomment if needed)
// const readFile = fs.readFileSync(filePath, "utf8");

// append data in file  (uncomment if needed)
// const appendFile = fs.appendFileSync(
//   filePath,
//   " \ni am doing crud oparation by sync mathod ",
//   "utf8"
// );

// delete file  (uncomment if needed)
// const deleteFile = fs.unlinkSync(filePath)

// rename file name
const fileNewName = "updatedtext.txt";
const fileNewPath = path.join(__dirname, fileNewName);
const renamefile = fs.renameSync(filePath,fileNewPath)
