import { createClient, print } from 'redis';

const client = createClient();

client
  .on('error', (err) => {
    console.log('Redis client not connected to the server:', err.toString());
  })
  .on('connect', () => {
    console.log('Redis client connected to the server');
  });

function setNewSchool(schoolName, value) {
  client.SET(schoolName, value, print);
}
function displaySchoolValue(schoolName) {
  client.GET(schoolName, (err, res) => {
    if (err) {
      console.log(err);
      throw err;
    }
    console.log(res);
  });
}

displaySchoolValue('Holberton');
setNewSchool('HolbertonSanFrancisco', '100');
displaySchoolValue('HolbertonSanFrancisco');
