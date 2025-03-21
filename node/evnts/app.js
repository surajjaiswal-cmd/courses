import { promises as fs } from "fs";
import { EventEmitter } from "events";
import path from "path";
import { fileURLToPath } from "url";

// Fix __dirname for ES Modules
const __filename = fileURLToPath(import.meta.url);
const __dirname = path.dirname(__filename);

const emitter = new EventEmitter();
const RECORDS_FILE = "records.json";
const filePath = path.join(__dirname, RECORDS_FILE);

// Function to load records from the file asynchronously
async function loadRecords() {
  try {
    const data = await fs.readFile(filePath, "utf8");
    return JSON.parse(data);
  } catch (error) {
    console.error("Error reading records file:", error);
  }
}

// Function to save records to the file asynchronously
async function saveRecords(records) {
  try {
    await fs.writeFile(filePath, JSON.stringify(records, null, 2), "utf8");
  } catch (error) {
    console.error("Error writing records file:", error);
  }
}

// Initialize records
let records = await loadRecords();

// Event listeners
emitter.on("user-login", async (arg) => {
  records["user-login"]++;
  console.log(`${arg} logged in`);
  await saveRecords(records);
});

emitter.on("user-purchase", async (arg, item) => {
  records["user-purchase"]++;
  console.log(`${arg} purchased ${item}`);
  await saveRecords(records);
});

emitter.on("profile-update", async (arg, email) => {
  records["user-update"]++;
  console.log(`${arg} updated profile with ${email}`);
  await saveRecords(records);
});

emitter.on("user-logout", async (arg) => {
  records["user-logout"]++;
  console.log(`${arg} logged out`);
  await saveRecords(records);
});

// Event listener to display summary
emitter.on("summary", async () => {
  console.log("===== Event Summary =====");
  console.log(await loadRecords()); 
});

// Emit events
(async () => {
  emitter.emit("user-login", "suraj");
  emitter.emit("user-purchase", "suraj", "phone");
  emitter.emit("profile-update", "suraj", "email@example.com");
  emitter.emit("user-logout", "suraj");

  // Wait for a small delay before showing the summary to ensure all writes are complete
  setTimeout(() => {
    emitter.emit("summary");
  }, 500);
})();
