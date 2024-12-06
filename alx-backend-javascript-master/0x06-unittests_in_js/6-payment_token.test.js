const { expect } = require('chai');
const getPaymentTokenFromAPI = require('./6-payment_token');

describe('getPaymentTokenFromAPI', () => {
  it('check for return of promise', (done) => {
    getPaymentTokenFromAPI(true).then((data) => {
      expect(data.data).to.be.equal('Successful response from the API');
      done();
    });
  });
});
