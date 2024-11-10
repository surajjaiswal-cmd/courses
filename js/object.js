//basic about object

let mySym = Symbol("key1");

let JSuser = {
  name: "suraj",
  "full name": "suraj jaiswal",
  age: 23,
  moNum: 36498237496,
  email: "surajjaiswal@githube.com",
  [mySym]: "myKey", //syntex to act symbole as key
};

//normal way to accses object's key and value.
// console.log(JSuser.name);
// we can not acces every key and value like string and symbole by this mathode.

//by this mathode we can access every type of key and value like string and symbole. for use it we need [] and " around keys.
// console.log(JSuser["name"]);
// console.log(JSuser["full name"]); // to access a string
// console.log(JSuser[mySym]); // to access a symbole
// console.log(JSuser); // mySym shows as key

// to change some value in object
// JSuser.age = 20;
// console.log(JSuser.age);

// Object.freeze(JSuser) // to freez object
// JSuser.age = 30;
// console.log(JSuser.age);

// key-value access by calling function
let msg = () => {
  console.log(`hello dear ${JSuser.name}`);
};

console.log(msg());
