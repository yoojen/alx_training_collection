const { expect } = require('chai');
const request = require('request');

describe('API test suite', () => {
  it('test GET / endpoint', (done) => {
    request.get('http://localhost:7865/', function (_err, response, body) {
      expect(response.statusCode).to.be.equal(200);
      expect(body).to.be.equal('Welcome to the payment system');
      done();
    });
  });
});
