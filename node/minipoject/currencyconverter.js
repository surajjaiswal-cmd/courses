import readline from "readline";
import https from "https";
import { log } from "console";

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

const url = "https://api.exchangerate-api.com/v4/latest/USD";

https.get(url, (response) => {
  let data = "";
  response.on("data", (chunk) => (data += chunk));
  response.on("end", () => {
      const rates = JSON.parse(data).rates;
      
    rl.question("enter the amount in USD : ", (amount) => {
      rl.question(
        "enter the target currency(e.g., INR , EUR, NPR) : ",
        (currency) => {
          const rate = rates[currency.toUpperCase()];
          if (rate) {
            console.log(
              `${amount} USD is approximately ${(rate * amount).toFixed(
                2
              )} ${currency}`
            );
          } else {
            console.log(`Invalid Currency Code`);
          }
          rl.close();
        }
      );
    });
  });
});
