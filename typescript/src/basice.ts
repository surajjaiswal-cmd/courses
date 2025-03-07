// let strValue: string = "suraj";
// let numberValue: number = 5;
// let result: number = 5 + 7;

// console.log("I am " + str);
// console.log("The value of num is: " + numberValue);
// console.log("The result of 5 + 7 is: " + result);

// function sumResult(a: number, b: number): number {
//   return a + b;
// }

// let additionResult: number = sumResult(4, 5);

// // console.log(additionResult);

// const isEven = (a: number, b: number): boolean => {
//   if ((a + b) % 2 === 0) return true;
//   else return false;
// };
// let num1: number = 7;
// let num2: number = 9;
// let result: boolean = isEven(7, 9);
// console.log(result);
//==================================================
// In TypeScript, type aliases are used to create new names for types. They can be used to define more complex types in a simpler and more readable way

// type StringAlias = string;

// let myString: StringAlias = "Hello, TypeScript";

// type User = {
//   id: number;
//   name: string;
//   email: string;
// };

// const user: User = {
//   id: 1,
//   name: "Alice",
//   email: "alice@example.com",
// };

// // Using type aliases with unions
// type ID = number | string;

// let userId: ID = 123;
// userId = "ABC123";

// console.log(myString);
// console.log(user);
// console.log(userId);
//======================================================
// A call signature in TypeScript defines the types of parameters and return values for a function. It's essentially a way to describe a function's interface without providing its implementation.
// type Greet = (name: string, num: number) => string;

// const greet: Greet = (name, num) => {
//   return `Hello, ${name} your id ${num}`;
// };

// console.log(greet("Alice", 123));
//============================================================
// Enums (short for enumerations) in TypeScript allow you to define a set of named constants, making your code more readable and maintainable. They can be used to represent a collection of related values
// enum Color {
//     Red = "RED",
//     Green = "GREEN",
//     Blue = "BLUE"
// }

// let favoriteColor: Color = Color.Green;

// console.log(favoriteColor);
// ===================================================
// Tuples in TypeScript are like arrays, but with a fixed number of elements, each having a specific type. They allow you to define an array with a specific number of elements and types
// Tuple with optional elements
// let optionalTuple: [string, number?];
// optionalTuple = ["Bob"];
// console.log(optionalTuple);

// let restTuple: [string, ...number[]];
// restTuple = ["Carol", 20, 25, 30];
// console.log(restTuple);
//=====================================================
// Union types allow a variable to be one of several types. You use the vertical bar (|) to define a union type
// Union type
// type ID = number | string;

// let userId: ID;

// userId = 123;
// userId = "ABC123";

// console.log(userId);
//--------------------------------------------
// Intersection types combine multiple types into one. You use the ampersand (&) to define an intersection type

//interface (Interfaces in TypeScript are useful for defining the shape of objects and ensuring that objects conform to specific structures. If you have a more specific use case in mind, feel free to share)
// interface Person  {
//     name: string;
//     age: number;
// };

// //aliases
// type Employee = {
//     employeeId: number;
//     department: string;
// };

// type EmployeeDetails = Person & Employee;

// let employee: EmployeeDetails = {
//     name: "Alice",
//     age: 30,
//     employeeId: 12345,
//     department: "Engineering"
// };

// console.log(employee);
// ====================================================

// Generics in TypeScript provide a way to create reusable components that work with a variety of data types. They allow you to define a type parameter that can be substituted with a specific type when the component is used.
// Generic interface
// interface Pair<T, U> {
//   first: T;
//   second: U;
// }

// let pair1: Pair<number, string> = { first: 1, second: "One" };
// let pair2: Pair<string, boolean> = { first: "Active", second: true };

// console.log(pair1);
// console.log(pair2);

// const sum = <T extends number>(a: T, b: T): T => {
//   return (a + b) as T;
// };

// let sumResult = sum<number>(1, 4);
// console.log(sumResult);

// const sum1 = <T, U>(a: T, b: U) => {
//   console.log(a, b);
// };

// let pair3 = sum1<number, string>(3, "nayan");
// let pair4 = sum1("defualt", false);

// T is a variable type wiche is not define i will define when you pas type with actuall perameter
//===========================================================
