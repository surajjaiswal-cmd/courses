// basic functions of string
// 1. print a to z alfabets
// 2. write a function to chack all vowels present in string or not
// 3. write a function to count number of vowels presence in a string
// 4. chack given string pangram or not (all alphabets available or not)

//============================================================
// basic functions of string

// let str = "Im suraj jaiswal and Im full stack developer";

// console.log(str.length);

// // find only frist index of frist element
// console.log(str.indexOf("jaiswal"));

// // backword search if position provided find frist index of last element
// console.log(str.lastIndexOf("Im", 16));

// // to search a string with ragular expression
// console.log(str.search(/im/gi));

// // returns array of match value
// console.log(str.match(/im/gi));

// //reurns a itrator so we can use it in a for...of loop to change output in a array
// let matchStr = str.matchAll("Im");

// for (let item of matchStr) {
//   console.log(item[0]);
// }

// // given string available or not alsways give true and false value and case sansetiv.
// console.log(str.includes("im"));

// // returns true if strig "start" with given value else returns false
// console.log(str.startsWith("im"));

// // returns true if strig "end" with given value else returns false
// console.log(str.endsWith("develper"));

// //  "Im suraj jaiswal and Im full stack developer";
// // are used to extract parts of a string in JavaScript based on starting and ending indicase
// console.log(str.slice());
// console.log(str.slice(3, 8));
// console.log(str.slice(-20, -16));

// // are used to extract parts of a string in JavaScript based on starting and ending indicase but convert indicase to "0"
// console.log(str.substring());
// console.log(str.substring(3, 8));
// console.log(str.substring(-20,-16)); // convert indicase to "0"

// // to repalce a worde into another word
// // it will replace only frist match
// console.log(str.replace("suraj", "alex"));

// // replace all matchs
// console.log(str.replaceAll("suraj", "alex"));

// // find charector at perticuler index
// console.log(str.charAt(7));

// // find code of charectore at perticule index but it will provide sky value of charectore
// console.log(str.charCodeAt(6));

// // find charector at perticuler index but it allow to find negetive index.
// //  "Im suraj jaiswal and Im full stack developer";
// console.log(str.at(7));
// console.log(str.at(-7));

// string to array
// let str2 = "lala,golu,kana,suraj,teju";
// console.log(str2);

// let splitArr = str2.split(",");
// console.log(splitArr);

// // to reverse an array
// let sp2 = str2.split(",").reverse();
// console.log(sp2);

// // array to string
// let sp3 = str2.split(",").reverse().join();
// console.log(sp3);

//==================================================================================
// 1. print a to z alfabets

// let atoz = "A";

// for (let i = 65; i <= 91; i++) {
//   console.log(String.fromCharCode(i)); // to change sky value to alphabets
// }

//============================================================================
// 2. write a function to chack all vowels present in string or not
// let vowelspresenc = (str) => {
//   let vow = "aeiou";
//   for (let item of vow) {
//     if (!str.includes(item)) return false;
//   }
//   return true;
// };

// let str = "Im suraj jaiswal ";
// console.log(vowelspresenc(str));

//=============================================================================
// 3. write a function to count number of vowels presence in a string

// let vowelspresencs = (str) => {
//     let vow = "aeiou";
//     let count = 0;
//   for (let item of str) {
//     if (vow.includes(item)) count++;
//   }
//   return count;
// };

// let strs = "Im suraj jaiswal aei ";
// console.log(vowelspresencs(strs));

//============================================================================
// 4. chack given string pangram or not (all alphabets available or not)
let check = (strs) => {
  let str = "";
  for (let i = 97; i <= 122; i++) {
    str += String.fromCharCode(i);
  }
  let count = 0;
  for (let item of str) {
    if (strs.includes(item)) count++;
  }
    if (count === 26) return true;
    else return false;
};
let strs =
  "the struggle your in today is developing the stranth you need for tomorrow";
console.log(check(strs));
