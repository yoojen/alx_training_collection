#!/usr/bin/node
const args = process.argv;
console.log(isNaN(args[2]) ? 'Not a number' : `My number: ${parseInt(args[2])}`);
