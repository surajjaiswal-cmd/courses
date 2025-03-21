import readline from "readline";

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

const API_KEY = "153c307bfc4f2e128f0c62711c9f84a4";

const getWeather = async (city) => {
  try {
    const url = `https://api.openweathermap.org/data/2.5/weather?q=${city}&appid=${API_KEY}&units=metric`;
    const response = await fetch(url);
    if (!response.ok) {
      throw new Error(`API Error: ${response.statusText}`);
    }
    const weatherData = await response.json();
    console.log(`\n🌤 Weather in ${city}:`);
    console.log(`Temperature: ${weatherData.main.temp}°C`);
    console.log(`Humidity: ${weatherData.main.humidity}%`);
    console.log(`Condition: ${weatherData.weather[0].description}`);
    console.log(`Feels Like : ${weatherData.main.feels_like.toFixed(0)}`);
  } catch (error) {
    console.log(`❌ Error: ${error.message}`);
  } finally {
    rl.close();
  }
};

rl.question("Enter the city name: ", async (city) => {
  if (city.trim() === "") {
    console.log("❌ Please enter a valid city name.");
    rl.close();
  } else {
    await getWeather(city.trim());
  }
});
