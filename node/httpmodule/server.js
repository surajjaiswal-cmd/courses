
const http = require("http");

const server = http.createServer((req, res) => {
  if (req.url === "/") {
    res.write("Hi, I am Suraj Jaswal from dewas  ");
    res.end();
  }
  if (req.url === "/about") {
    res.write("this is about page making a server by node js ");
    res.end();
  }
});

const port = 3000;
server.listen(port, () => {
  console.log(`Server is working on port ${port}`);
});
