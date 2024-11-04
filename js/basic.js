// if else, switch case and loop

//1. check eligiblity for voting.
//2. check number oddor even.
//3. check give number prime or not.
//4. switch case.
//5. print  table of any number.
//6. check  leap year or not.
//7. print a piramid with star.

//====================================================
//1. chack eligiblity for voting
// let personAge = 18;
// let country = true; // chack indian or not
// let register = false; // register for vote or not
// if (personAge >= 18 && country && register) {
//   console.log("they  are eligible  to vote");
// } else {
//   console.log("they are not eligible  to vote");
// }

//====================================================
//2. chake number oddor even.

// let num = 7;
// if (num % 2 == 0) {
//     console.log("odd number");
// } else {
//     console.log("even nhumber");
// }

//====================================================
//3. check give number prime or not.
// let n = 111;
// let a = true;
// for (let i = 2; i < n; i++) {
//   if (n % i == 0) {
//     a = false;
//     break;
//   }
// }
// if (a) console.log("prime number");
// else console.log("not a prime number");

//====================================================
//4. switch case
// let num1 = 4;
// let num2 = 5;
// let operator = "/";
// switch (operator) {
//   case "+":
//     console.log(num1 + num2);
//     break;
//   case "-":
//     console.log(num1 - num2);
//     break;
//   case "*":
//     console.log(num1 * num2);
//     break;
//   case "/":
//     console.log(num1 / num2);
//     break;
//   default:
//     console.log("choise not match");
// }

//====================================================
//5. print  table of any number

// let num1 = 8;
// for (let i = 1; i <= 10; i++)
//   console.log(num1 + " * " + i + " = " + num1 * i);

// ====================================================
//6. check  leap year or not.
// let year = 2024
//   ;
// if ((year % 4 === 0 && year % 100 !== 0) || year % 400 === 0)
//   console.log("it is a leap year");
//  else console.log("not a leap year");

// ====================================================
//print a piramid with star.
for (let i = 1; i <= 5; i++) {
  let line = "";
  for (let j = 1; j <= i; j++) {
    line += "*";
  }
  console.log(line);
}
