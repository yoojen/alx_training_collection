const express = require('express');
const PORT = 7865;
const app = express();

app.get('/', (_req, res) => {
  res.statusCode = 200;
  res.setHeader('Content-Type', 'plain/text');
  res.send('Welcome to the payment system');
});

app.get('/cart/:id(\\d+)', (req, res) => {
  const id = req.params.id;
  res.send(`Payment methods for cart ${id}`);
});

app.get('/available_payments', (_req, res) => {
  data = {
    payment_methods: {
      credit_cards: true,
      paypal: false,
    },
  };
  res.json(data);
});

app.post('/login', (req, res) => {
  let userName = '';
  if (req.body) {
    userName = req.body.userName;
  }
  res.send(`Welcome ${userName}`);
});

app.listen(PORT, () => console.log(`API available on localhost port ${PORT}`));

module.exports = app;
