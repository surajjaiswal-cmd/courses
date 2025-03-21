import readline from "readline";
import fs from "fs";
import path from "path";
import { fileURLToPath } from "url";

const __filename = fileURLToPath(import.meta.url);
const __dirname = path.dirname(__filename);

// Create a readline interface
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

const fileCreation = () => {
  rl.question("Enter file name (without extension): ", (fileName) => {
    rl.question("Enter file content: ", (content) => {
      if (!fileName.trim()) {
        console.log("Error: File name cannot be empty!");
        rl.close();
        return;
      }

      const filename = `${fileName.trim()}.txt`;
      const filePath = path.join(__dirname, filename);

      fs.writeFile(filePath, content, (error) => {
        if (error) {
          console.log(`Error: Failed to create file. ${error.message}`);
        } else {
          console.log(
            `✅ File '${filename}' created successfully at ${filePath}!`
          );
        }
        rl.close();
      });
    });
  });
};

fileCreation();
