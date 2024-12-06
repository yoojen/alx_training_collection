const { expect } = require('chai');
const request = require('request');

describe('API test suite', () => {
  it('GET / returns correct response', (done) => {
    request.get('http://localhost:7865/', (_err, res, body) => {
      expect(res.statusCode).to.be.equal(200);
      expect(body).to.be.equal('Welcome to the payment system');
      done();
    });
  });
  it('test GET /cart/:id endpoint', (done) => {
    request.get(
      'http://localhost:7865/cart/65',
      function (_err, response, body) {
        expect(response.statusCode).to.be.equal(200);
        expect(body).to.be.equal('Payment methods for cart 65');
        done();
      }
    );
  });
  it('test for not-numeric parameter passed', (done) => {
    request.get('http://localhost:7865/cart/hello', (_err, response, body) => {
      expect(response.statusCode).to.be.equal(404);
      expect(response.headers['content-type']).to.be.equal(
        'text/html; charset=utf-8'
      );
      done();
    });
  });
});
