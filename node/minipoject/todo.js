import readline from "readline";

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout, 
});

const todos = [];

const showMenu = () => {
  console.log("\n1: Add a task \n2: View tasks \n3: Exit");
  rl.question("Choose an option: ", (choice) => {
    handleMenu(choice);
  });
};

const handleMenu = (choice) => {
  switch (choice) {
    case "1":
      rl.question("Enter the task: ", (task) => {
        todos.push(task);
        console.log(`Task added: "${task}"`);
        showMenu();
      });
      break;
    case "2":
      console.log("\nYour Tasks:");
      if (todos.length === 0) {
        console.log("No tasks available.");
      } else {
        todos.forEach((task, index) => {
          console.log(`${index + 1}: ${task}`);
        });
      }
      showMenu();
      break;
    case "3":
      console.log("Goodbye!");
      rl.close();
      break;
    default:
      console.log("Invalid choice, please select again.");
      showMenu();
  }
};

showMenu();
