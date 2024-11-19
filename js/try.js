let getdata = () => {
  return new Promise((resolve, reject) => {
    let msg = true;
    if (msg) {
      resolve("promise resolve...😃");
    } else {
      reject("promise reject....⚠️");
    }
  });
};

let asyncFunction = async () => {
  try {
    let data1 = await getdata();
    console.log(data1);
  } catch (error) {
    console.log("error", error);
  }
};

asyncFunction();
