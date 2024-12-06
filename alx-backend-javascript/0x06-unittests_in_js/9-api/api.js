const express = require('express');
const PORT = 7865;
const app = express();

app.get('/', (_req, res) => {
  res.send('Welcome to the payment system');
});

app.get('/cart/:id(\\d+)', (req, res) => {
  const id = req.params.id;
  res.send(`Payment methods for cart ${id}`);
});
app.listen(PORT, () => console.log(`API available on localhost port ${PORT}`));

module.exports = app;
