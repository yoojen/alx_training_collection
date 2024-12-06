const express = require('express');

const PORT = 1245;
app = express();

app.get('/', (_, res) => {
  res.send('Hello Holberton School!');
});

app.listen(PORT, () => {
  process.stdout.write(`Server running on: ${PORT}`);
});

module.exports = app;
