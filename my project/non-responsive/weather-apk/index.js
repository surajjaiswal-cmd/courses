let input = document.querySelector(".input-city");
let cityName = document.querySelector(".city-name");
let dateandtime = document.querySelector(".dateandtime");
let forecast = document.querySelector(".forcast");
let icon = document.querySelector(".icon");
let temperature = document.querySelector(".tamperature");
let min = document.querySelector(".min");
let max = document.querySelector(".max");
let feelsLike = document.querySelector(".feels-like");
let humidity = document.querySelector(".humidity");
let wind = document.querySelector(".wind");
let pressure = document.querySelector(".pressure");

let city = "dewas";

let getCountryName = (code) => {
  return new Intl.DisplayNames([code], { type: "region" }).of(code);
  // this code use to change country code to country name
};

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
let getdata = async () => {
  let url = `https://api.openweathermap.org/data/2.5/weather?q=${city}&appid=153c307bfc4f2e128f0c62711c9f84a&units=metric`;
  try {
    let response = await fetch(url);
    let data = await response.json();
    console.log(data);
    cityName.innerHTML = `<h2>${data.name}, ${getCountryName(
      data.sys.country
    )}</h2>`;
    dateandtime.innerHTML = getDateandTime(data.dt);
    forecast.innerHTML = data.weather[0].main;
    icon.innerHTML = `<img src="http://openweathermap.org/img/wn/${data.weather[0].icon}@2x.png" alt="Weather Icon">`;

    temperature.innerHTML = `${data.main.temp.toFixed(0)}&#176C`;
    min.innerHTML = `min : ${data.main.temp_min.toFixed(0)} _ `;
    max.innerHTML = `max : ${data.main.temp_max.toFixed(0)}`;
    feelsLike.innerHTML = `${data.main.feels_like.toFixed(0)}&#176C`;
    humidity.innerHTML = `${data.main.humidity}%`;
    wind.innerHTML = `${data.wind.speed}km/h`;
    pressure.innerHTML = `${data.main.pressure} hPa`;
  } catch (error) {
    console.log(error);
  }
};
input.addEventListener("keydown", (event) => {
  if (event.key === "Enter") {
    city = input.value;
    getdata();
  }
});
getdata();


