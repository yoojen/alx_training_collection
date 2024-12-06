const fs = require('fs');

const countStudents = (path) =>
  new Promise((resolve, reject) => {
    file_data = [];
    let NUMBER_OF_STUDENTS = 0;
    let occurance = {};

    fs.readFile(path, 'utf-8', (err, data) => {
      if (err) {
        reject(new Error('Cannot load the database'));
      }
      if (data) {
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

        console.log(`Number of students: ${Object.keys(file_data).length}`);
        for (const key in occurance) {
          let count = 0;
          let names = [];
          for (let i = 0; i < occurance[key].length; i++) {
            names.push(' ' + occurance[key][i].first_name);
            count = count + 1;
          }
          console.log(
            `Number of students in ${key}: ${
              Object.keys(occurance[key]).length
            }. List:${names}`
          );
        }
        resolve(true);
      }
    });
  });

module.exports = countStudents;
