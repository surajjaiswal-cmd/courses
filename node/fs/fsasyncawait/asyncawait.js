const fs = require("fs/promises");
const path = require("path");

// crud oparations by synchronous mathod

// Define file name and path
const fileName = "asyncawait.txt";
const filePath = path.join(__dirname, fileName);

// Write to the file (uncomment if needed)

const file = async () => {
  try {
    await fs.writeFile(filePath, "i am suraj jaiswal", "utf8");
    console.log("done");
  } catch (error) {
    console.log(error);
  }
};
file();

// Read the file correctly (uncomment if needed)
// const readFile = async () => {
//   try {
//     const data = await fs.readFile(filePath, "utf8");
//     console.log(data);
//   } catch (error) {
//     console.log(error);
//   }
// };
// readFile();

// append data in file  (uncomment if needed)
// const appendFile = async () => {
//   try {
//     await fs.appendFile(
//       filePath,
//       "\ndoing crud oparations by async await",
//       "utf8"
//     );
//     console.log("done");
//   } catch (error) {
//     console.log(error);
//   }
// };
// appendFile();

// delete file  (uncomment if needed)
// const deleteFile = async () => {
//   try {
//     const data = await fs.unlink(filePath);
//     console.log(data);
//   } catch (error) {
//     console.log(error);
//   }
// };
// deleteFile();




//To read the contents of a directory (i.e., list all files and folders inside a directory)
// const dirPath = __dirname;
// const readFile = async () => {
//   try {
//     const files = await fs.readdir(dirPath, "utf8"); // ✅ Correct method
//     console.log("File content:", files);
//   } catch (error) {
//     console.log(error);
//   }
// };
// readFile();
