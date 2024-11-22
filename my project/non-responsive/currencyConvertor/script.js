let dropDowns = document.querySelectorAll(".fromopt");
let fromFlag = document.querySelector(".from-flag");
let toFlag = document.querySelector(".to-flag");
let from = document.querySelector(".from select");
let to = document.querySelector(".to select");
let input = document.querySelector(".from-input");
let output = document.querySelector(".to-input");
let finalFrom = document.querySelector(".final-from");
let finalTo = document.querySelector(".final-to");
let finalFromPrice = document.querySelector(".final-from-price");
let finalToPrice = document.querySelector(".final-to-price");
let updateAt = document.querySelector(".update-at");
let moreAbout = document.querySelector(".more-about");

let api = "https://api.exchangerate-api.com/v4/latest/USD";

// sending requst  to get data from api
let callapi = async () => {
  try {
    let url = await fetch(api);
    return await url.json();
  } catch (error) {
    console.log(error);
  }
};

//to change date foramte
let getDateandTime = (dt) => {
  let cur = new Date(dt * 1000);
  let dateOption = {
    weekday: "long",
    month: "long",
    day: "numeric",
    year: "numeric",
    hour: "numeric",
    minute: "numeric",
  };
  let formater = new Intl.DateTimeFormat("en-US", dateOption);
  return formater.format(cur);
};

// updAing lasr price when price are changed
let lastUpdateAt = async () => {
  try {
    let data = await callapi();
    if (!data) return;
    let newTime = getDateandTime(data.time_last_updated);
    updateAt.innerText = `Upadated At ${newTime}`;
  } catch (error) {
    console.log(erorr);
  }
};

// update price in to input
let updateprice1 = async () => {
  try {
    let data = await callapi();
    if (!data) return;
    let fromValue = from.value;
    let toValue = to.value;
    moreAbout.innerText = `More About ${from.value} / ${to.value}`;
    // updating more about text and link of from-input
    moreAbout.href = `https://www.google.com/finance/quote/${from.value}-${to.value}?sa=X&ved=2ahUKEwi5pY6u9e-JAxUecWwGHQ0oOu0QmY0JegQIARAs`;
    //tomake sure enter number is bigger then 0 in from-input
    if (input.value <= 0) {
      input.value = 1;
    }
    finalFromPrice.innerText = input.value;
    let fromRate = data.rates[fromValue];
    let toRate = data.rates[toValue];

    let converted = ((toRate / fromRate) * input.value).toFixed(2);
    // updating final price of to-input
    output.value = converted;
    finalToPrice.innerText = converted;
    lastUpdateAt();
  } catch (error) {
    console.log(error);
  }
};

// update price in from input
let updateprice2 = async () => {
  try {
    let data = await callapi();
    if (!data) return;
    let fromValue = from.value;
    let toValue = to.value;
    // updating more about text and link of to-input
    moreAbout.innerText = `More About ${from.value} / ${to.value}`;
    moreAbout.href = `https://www.google.com/finance/quote/${from.value}-${to.value}?sa=X&ved=2ahUKEwi5pY6u9e-JAxUecWwGHQ0oOu0QmY0JegQIARAs`;
    //tomake sure enter number is bigger then 0 in to-input
    if (output.value <= 0) {
      output.value = 1;
    }
    finalToPrice.innerText = output.value;
    let fromRate = data.rates[fromValue];
    let toRate = data.rates[toValue];
    let converted = ((fromRate / toRate) * output.value).toFixed(2);
    // updating final price of from-input
    input.value = converted;
    finalFromPrice.innerText = converted;
    lastUpdateAt();
  } catch (error) {
    console.log(error);
  }
};

// to run automatically when you type in from input
input.addEventListener("input", () => {
  updateprice1();
});
// to run automatically when you change in to input
output.addEventListener("input", () => {
  updateprice2();
});

// import country code and currency code
import { countryList } from "./code1.js";

// update falge img
let changeflag = (ele, flagimg) => {
  for (let countryCode in countryList) {
    if (ele === countryCode) {
      let flagCode = countryList[countryCode];
      flagimg.src = `https://flagsapi.com/${flagCode}/flat/64.png`;
    }
  }
};

// imporet currency name and code
import { currencylist } from "./code2.js";

let updatefinal = (ele) => {
  for (let curcode in currencylist) {
    if (ele === curcode) {
      return currencylist[curcode];
    }
  }
};

// creating options for from and to select dropdown
dropDowns.forEach((dropoption) => {
  for (let code in currencylist) {
    let newOpt = document.createElement("option");
    newOpt.innerText = currencylist[code];
    newOpt.value = code;

    if (dropoption.name === "from" && code === "USD") {
      newOpt.selected = true;
    } else if (dropoption.name === "to" && code === "INR") {
      newOpt.selected = true;
    }
    dropoption.appendChild(newOpt);
    // calling funciton for defalt selcted currency's price update when relode or frist visit
    updateprice1();
  }
  dropoption.addEventListener("change", (event) => {
// calling function to update price only in to-input when curency change in both input
    updateprice1();
    if (dropoption.name === "from") {
      // to update flage img in from
      changeflag(event.target.value, fromFlag);
      //update from currency name in final
      let finalFromValue = updatefinal(event.target.value);
      finalFrom.innerText = " ";
      finalFrom.innerText = ` ${finalFromValue} `;
    } else if (dropoption.name === "to") {
      // to update flage img in to
      changeflag(event.target.value, toFlag);
      //update to currency name in final
      let finalToValue = updatefinal(event.target.value);
      finalTo.innerText = " ";
      finalTo.innerText = ` ${finalToValue} `;
    }
  });
});

// https://www.google.com/finance/quote/DOP-LKR?sa=X&ved=2ahUKEwjHv7qg7e-JAxVOUGwGHWS-IksQmY0JegQIARAs
