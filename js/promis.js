//A Promises object represent the eventual completion (or failure) of an asynchronous code and its results value.
// Promises are use to make an asynchronous code more efficintly, avoiding call back hell and make the code easy to maintain and read.

let promise = new Promise((resolve, reject) => {
  let msg = true;
  if (msg) {
    resolve("promise resolve...😃");
  } else {
    reject("promise reject....⚠️");
  }
});

promise
  .then((massage) => {
    console.log(massage);
  })
  .catch((error) => {
    console.log(error);
  })
  .finally(() => {
    console.log("task complete...✅");
  });

// promises are provided by browser API when we request to fatch any data. it is not user define.
