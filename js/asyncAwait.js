/* The async and await keywords in JavaScript provide a more elegant and readable way to handle asynchronous operations, compared to traditional promise chaining. They allow you to write asynchronous code that looks and behaves more like synchronous code, making it easier to understand and maintain.
Declares a function as asynchronous.
Always returns a promise.
Inside an async function, you can use the await keyword to pause execution until a promise is resolved or rejected. */

let getdata = (num) => {
  return new Promise((resolve, reject)=>{
    setTimeout(() => {
      let msg = true;
      if (msg) 
        resolve(`promise ${num} resolve...😃`);
      else 
        reject("promise reject....⚠️");
      
    }, 1000);
  });
};

(async () => {
  try {
    let data1 = await getdata(1);
    console.log(data1);
    let data2 = await getdata(2);
    console.log(data2);
    let data3 = await getdata(3);
    console.log(data3);
  } catch (error) {
    console.log(error);
  }
})();
