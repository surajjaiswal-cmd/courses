// 1. insert and delet data from an array.
// 2. insert and delet data from a perticiler place from an array.
// 3. for...of, for...in , forEach and map function.
// 4. indexOf,lastIndexOf and Include mathodes.
// 5. some qustions for index concept.
// 6. filter in array.
// 7. uniqe nuber in array.
// 8. sorting array.
// 9. return squre only of odd number
// 10. add "Mr. " in frint of every string.
// 11. Reduce mathod in js

//=====================================================
// 1. insert and delet data from an array.
// let arr = ["ram", "suraj", "lala", "kana"];
// arr.push("golu");
// arr.unshift("netik");
// console.log(arr);
// arr.pop();
// arr.shift();
// console.log(arr);

//=====================================================
// 2. insert and delet data from a perticiler place from an array.
// let arr = ["ram", "suraj", "lala", "kana"];
// arr.splice(1,1,"suraj","netik");
// console.log(arr.length);

//=====================================================
// 3. for...of, for...in , forEach and map function.
// let arr = ["ram", "suraj", "lala", "kana", "golu", "netik"];

// for...of loop
// for (let item of arr) {
//   console.log(item);
// }

// for...in loop
// for (let item in arr) {
//   console.log(item);
// }

//forEach

// arr.forEach((currEle) => {
//   console.log(currEle + " A"); // only perform task on each element return not allow
// });

// let newarr = arr.map((currEle, index) => {
//   return `${currEle} ${index}`; // perform task on each element and allow return a new array
// });
// console.log(newarr);

//=====================================================
//4. indexOf,lastIndexOf and Include mathodes.
// let arr = ["ram", "suraj", "lala", "kana", "netik", "golu", "netik"];

// let index = arr.indexOf("golu", 4); //second perameter for start serching from this index
// console.log(index);
// let index1 = arr.includes("rudra");
// console.log(index1);
// let index2 = arr.lastIndexOf("netik", 5);//second perameter for start serching from this index and this mathode serching in backwords.
// console.log(index2);

//=====================================================
// 5. some qustions for index concept.
// A. Add one more name at last.
// let arr = ["ram", "suraj", "lala", "kana"];
// arr.splice(arr.length, 0, "netik");
// console.log(arr);
// //B. update "suraj" to suraj.
// let surIndex = arr.indexOf("suraj");
// arr.splice(surIndex, 1, "Suraj");
// console.log(arr);
// //C. delete lala from array
// let lalaIndex = arr.indexOf("lala");
// arr.splice(lalaIndex, 1);
// console.log(arr);

//=============================================================
// 6. filter in array.

// filtere it returns an array with elements that paas a privided test by function.
// let arr = ["suraj", "kana", "lala", "golu"];
// let filter = arr.filter((curEle) => curEle.includes("n"));
// console.log(filter);

// let numArr = [1, 2, 3, 4, 5, 6, 5];
// let filterNum = numArr.filter((number) => number < 3);
// console.log(filterNum);

// let value = 5;
// let filterNumb = numArr.filter((number) => number !== 5);
// console.log(filterNumb); // return all element expected a value which pass a test provided by functon

// // find it returns only frist element that paas a privided test by function.
// let find = arr.find((curEle) => curEle.includes(`l`));
// console.log(find);

// let findNum = numArr.find((number) => number > 3);
// console.log(findNum);

// let findNumIndex = numArr.findIndex((number) => number > 3);
// console.log(findNumIndex);

//====================================================================
// 7. uniqe nuber in array.

// let numArr = [1, 2, 3, 6, 4, 5, 6, 5];
// let filterNum = numArr.filter(
//   (number, index, arr) => arr.indexOf(number) === index
// );
// console.log(filterNum);

//============================================================\
// 8. sorting array.

// let arr = ["suraj", "kana", "lala", "golu"];
// arr.sort();
// console.log(arr);

// let numArr = [33, 53, 234, 86, 2, 56, 65, 3, 78];
// let sortArr = numArr.sort((a, b) => {
//   if (a > b) return 1;
//   else return -1;
// });
// console.log(sortArr);

//================================================================
// 9. return squre only of odd number\
// let arr = [1, 2, 3, 4, 5, 6, 7, 8];
// let oddSquar = arr.map((curEle) => (curEle % 2 === 0 ? curEle * curEle : undefined))
//     .filter((curEle) => curEle !== undefined)
// console.log(oddSquar);

//==================================================================
// 10. add "Mr. " in frint of every string.

// let arr = ["suraj", "kana", "lala", "golu"];

// let add = arr.map((curEle) => `Mr. ${curEle}`);
// console.log(add);

//====================================================================
// 11. Reduce mathod in js
let numArr = [1, 3, 4, 5, 6, 7, 8, 9, 0];
let eleArr = ["jai", "shree", "ram"];
let redNum = numArr.reduce((acc, curNum) => acc * curNum); // acc = accumulator
console.log(redNum);
let redEle = eleArr.reduce((acc, curEle) => acc + " " + curEle);
console.log(redEle);
