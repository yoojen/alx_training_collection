const sinon = require('sinon');
const { expect } = require('chai');
const sendPaymentRequestToApi = require('./5-payment');

describe('sendPaymentRequestToAPI', () => {
  let spy;
  beforeEach(() => {
    if (!spy) {
      spy = sinon.spy(console, 'log');
    }
  });
  afterEach(() => {
    spy.resetHistory();
  });
  it('calls sendPaymentRequestToAPI with 100 & 20', () => {
    sendPaymentRequestToApi(100, 20);
    expect(spy.calledWith('The total is: 120')).to.be.equal(true);
    expect(spy.calledOnce).to.be.equal(true);
  });
  it('calls sendPaymentRequestToApi with 10 & 10', () => {
    sendPaymentRequestToApi(10, 10);
    expect(spy.calledWith('The total is: 20')).to.be.equal(true);
    expect(spy.calledOnce).to.be.equal(true);
  });
});
