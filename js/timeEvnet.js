// setTimeout event is run once time after a specifice time
// let display = () => {
//   console.log("This MSG Will Display after 1 second");
// };
// setTimeout(display, 2000);

// setInterVal event is reapete after a spacifice time

// let display1 = () => {
//     console.log("This MSG Will Display and reapete after 2 second");

// };
// setInterval(display1, 2000);

// to stop repeat loop after some time
let num = 1;
let reapetation = () => {
  console.log(`reapitation number = ${num}`);
  num++;
};
let printMsg = setInterval(reapetation, 1000); // this mathod will excute -1 time of given timeout interwal
reapetation();
setTimeout(() => {
  clearInterval(printMsg);
}, 5000);
