// 1. Frist Class Function
// 2. Higher Order Function
// 3. Callback Fuction
// 4. Callback Hell

//========================================================================

/* 1. Frist Class Function that function can bee assigned to a varable, passed as arguments to other function, 
stored in data structure. essentially, function are treated like any other value in JS */
//Frist class Function

let print = (nam) => {
  console.log(`welcome ${nam}`);
};
print("nayan");

//==============================================================================

/*2. Higher Order Function is a funtion that take one or more function as a argument and return a function as a result. 
These function are powerfull becaue they allow for greater abstraction and reusability of code. */
// Higher Order Function
let showmasg = () => {
  console.log("Hi my name is suraj jaiswal");
};

let printMsg = (showmasg) => {
  showmasg();
};
printMsg(showmasg); // passing a function aa argument

let some = (a, b) => {
  return () => {
    return a + b;
  };
};
let sumFunction = some(4, 8); // sumFunction is now the returned function
console.log(sumFunction());

//==========================================================================================================

/* 3. Callback Function is function passed as a aargument to a function asd excute after complete some taskes. call back function are use to program asynchronous funtion like facthing data and hendling events*/

let callbackMsg = () => {
  setTimeout(() => {
    console.log("My nick name is alex jaiswal");
  }, 5000); // store in WEB API for 5 secound
};
(resolve, reject) => {};

//===================================================================================

/*4 .Callback Hell in JavaScript is a situation where you end up with deeply nested callback functions, making the code difficult to read, maintain, and debug. This often happens when dealing with multiple asynchronous operations that need to be performed in sequence */
// Callback Hell
(() => {
  setTimeout(() => {
    console.log("My name is suraj jaiswal");
    setTimeout(() => {
      console.log("i am from dewas M.P.");
      setTimeout(() => {
        console.log("i am learning full stack course");
        setTimeout(() => {
          console.log("from code batter indore");
        }, 1000);
      }, 1000);
    }, 1000);
  }, 1000);
})(); // calling by IIFE

//=================================================================================

