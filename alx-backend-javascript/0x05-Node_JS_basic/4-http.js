const http = require('http');
const PORT = 1245;
const HOSTNAME = '127.0.0.1';

const app = http.createServer((_, res) => {
  const responeText = 'Hello Holberton School!';

  res.statusCode = 200;
  res.setHeader('Content-Type', 'text/plain');
  res.setHeader('Content-Length', responeText.length);
  res.write(Buffer.from(responeText));
});

app.listen(PORT, HOSTNAME, () => {
  process.stdout.write(`erver listening at -> http://${HOSTNAME}:${PORT}\n`);
});
module.exports = app;
