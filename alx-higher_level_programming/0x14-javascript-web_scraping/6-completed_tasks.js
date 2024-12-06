#!/usr/bin/node

const request = require('request');
const url = process.argv[2];
request.get(url, function (err, response, body) {
  if (err) {
    console.log(err);
  } else {
    const todos = JSON.parse(body);
    const finished = {};
    for (const todo of todos) {
      if (todo.completed === true) {
        if (todo.userId in finished) {
          finished[todo.userId]++;
        } else {
          finished[todo.userId] = 1;
        }
      }
    }
    console.log(finished);
  }
});
