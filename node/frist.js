// const path = require("path");
import os from "os";

// const filepath = path.join("folder", "files.txt");
// console.log(filepath);

const totalMemory = os.freemem();
console.log(`Total Memory: ${totalMemory} bytes`);
console.log(`Total Memory in GB: ${(totalMemory / 1024 ** 3).toFixed(2)} GB`);


console.log(os.type());
