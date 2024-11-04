//1. addition of  two numbers.
//2. arithmatic oprations by functins
//3. reverse a string.
//4. check polindrome or not.
//5. Write a JavaScript function that reverses a number.
//6. Write a JavaScript function that returns a string that has letters in alphabetical order.
//=============================================================
//1. addition of  two numbers.
// function add(a, b) {
//     return a + b;
// }
// let a, d;
// a = 4;
// b = 9;
// console.log( "addition of two number = " + add(a, b));
//=============================================================
//2. arithmatic oprations by functins
// function ans(n1, n2, op) {
//   switch (op) {
//     case "+":
//       console.log(n1 + n2);
//       break;
//     case "-":
//       console.log(n1 - n2);
//       break;
//     case "*":
//       console.log(n1 * n2);
//       break;
//     case "/":
//       console.log(n1 / n2);
//       break;
//     default:
//       console.log("choise not match");
//   }
// }
// let sum = ans(4, 5, "-");
// console.log(sum);
//========================================================
//3. reverse a string.
// let reveseString =(str) => {
//   newStr = "";
//   for (let i = str.length - 1; i >= 0; i--) {
//     newStr += str[i];
//   }
//   return newStr;
// }
// let str = "suraj jaiswal";
// console.log(reveseString(str));
//========================================================
//4. check polindrome or not.
// let reveseString = (str) => {
//   newStr = "";
//   for (let i = str.length - 1; i >= 0; i--) {
//     newStr += str[i];
//   }
//   str === newStr ? console.log("yas") : console.log("no");
// };
// let str = "suraj";
// reveseString(str);
//===========================================================
//5. Write a JavaScript function that reverses a number.
function reverse(num) {
  let newNum = 0;
  while (num) {
    let ld = num % 10;
    newNum = 10 * newNum + ld;
  num = Math.floor(num / 10);
  }
  console.log(newNum);
}
reverse(12345);
//============================================================
