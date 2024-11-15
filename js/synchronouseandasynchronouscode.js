// synchtonous code excuter line by line. each statment wait for the periouse one to finish before excute.
// Asynchronous code allows to other statment excuting in backgroung while it wait for an asynchronous exprestion to compleate.

// synchonous code
let fun2 = () => {
  console.log("fun2 start and end");
};
let fun1 = () => {
  console.log("fun1 starts");
  fun2();
  console.log("fun1 end");
};
fun1();
console.log("=======================================");

// asynchronous code
let fun4 = () => {
  setTimeout(() => {
    console.log("fun4 start and end");
  }, 1000); // it will store in WEB API for one minutes then excute 
};
let fun3 = () => {
  console.log("fun3 starts");
  fun4();
  console.log("fun3 end");
};
fun3();
