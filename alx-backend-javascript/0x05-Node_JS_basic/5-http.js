const http = require('http');
const { stdout } = require('process');
const fs = require('fs');
const PORT = 1245;
const HOSTNAME = '127.0.0.1';
const FILE_PATH = process.argv.length > 2 ? process.argv[2] : '';

const countStudents = (path) =>
  new Promise((resolve, reject) => {
    file_data = [];
    let NUMBER_OF_STUDENTS = 0;
    let occurance = {};
    if (!path) {
      reject(new Error('Cannot load the database'));
    }
    fs.readFile(path, 'utf-8', (err, data) => {
      if (err) {
        reject(new Error('Cannot load the database'));
      }
      if (data) {
        const toBeResolved = [];
        data = data.split('\n');
        fields = data[0];
        for (let i = 0; i < data.length; i++) {
          if (i == 0) {
            continue;
          }
          if (data[i] == '\r' || data[i].length <= 0) {
            break;
          } else {
            first_name = data[i].split(',')[0];
            last_name = data[i].split(',')[1];
            age = data[i].split(',')[2];
            field = data[i].split(',')[3].replace('\r', '');
            NUMBER_OF_STUDENTS += 1;
            file_data.push({ first_name, last_name, age, field });
          }
        }
        file_data.map((person) => {
          field = person['field'];
          if (!occurance[field]) {
            occurance[field] = [person];
          } else {
            occurance[field].push(person);
          }
        });

        toBeResolved.push(
          `Number of students: ${Object.keys(file_data).length}`
        );
        for (const key in occurance) {
          let count = 0;
          let names = [];
          for (let i = 0; i < occurance[key].length; i++) {
            names.push(' ' + occurance[key][i].first_name);
            count++;
          }
          toBeResolved.push(
            `Number of students in ${key}: ${
              Object.keys(occurance[key]).length
            }. List:${names}`
          );
        }
        resolve(toBeResolved);
      }
    });
  });

app = http.createServer((req, res) => {
  const url = req.url;
  if (url == '/') {
    const resText = 'Hello Holberton School!';
    res.setHeader('Content-Type', 'text/plain');
    res.setHeader('Content-Length', resText.length);
    res.statusCode = 200;
    res.end('Hello Holberton School!');
  }
  if (url == '/students') {
    const responseParts = ['This is the list of our students'];
    countStudents(FILE_PATH)
      .then((msgs) => {
        for (let i = 0; i < msgs.length; i++) {
          responseParts.push(msgs[i]);
        }
        const resText = responseParts.join('\n');
        res.setHeader('Content-Type', 'plain/text');
        res.setHeader('Content-Length', resText.length);
        res.statusCode = 200;
        res.write(Buffer.from(resText));
      })
      .catch((err) => {
        responseParts.push(err instanceof Error ? err.message : err.toString());
        const resText = responseParts.join('\n');
        res.setHeader('Content-Type', 'text/plain');
        res.setHeader('Content-Length', resText.length);
        res.statusCode = 200;
        res.write(Buffer.from(resText));
      });
  }
});

app.listen(PORT, HOSTNAME, () => {
  stdout.write(`Server running at -> http://${HOSTNAME}:${PORT}\n`);
});

module.exports = app;
