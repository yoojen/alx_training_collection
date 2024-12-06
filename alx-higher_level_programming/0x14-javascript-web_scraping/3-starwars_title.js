#!/usr/bin/node

const request = require('request');

const movieId = process.argv[2];
const url = `https://swapi-api.alx-tools.com/api/films/${movieId}`;
request
  .get(url, function (err, response, body) {
    if (err) {
      console.log(err);
    } else {
      console.log(JSON.parse(body).title);
    }
  });
