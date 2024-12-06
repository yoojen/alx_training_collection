#!/usr/bin/node
const args = process.argv;
if (isNaN(args[2])) {
  console.log('Missing size');
}
for (let i = 0; i < args[2]; i++) {
  console.log('X'.repeat(args[2]));
}
