const { expect } = require('chai');
const sendPaymentRequestToApi = require('./4-payment');
const Utils = require('./utils');
const sinon = require('sinon');

describe('sendPaymentRequestToApi', () => {
  it('sendPaymentRequestToApi used calculateNumber method', () => {
    const spy = sinon.spy(console);
    const stub = sinon.stub(Utils, 'calculateNumber');

    stub.withArgs('SUM', 100, 20).returns(10);
    sendPaymentRequestToApi(100, 20);
    expect(stub.calledWith('SUM', 100, 20)).to.be.equal(true);
    expect(stub.callCount).to.be.equal(1);
    expect(spy.log.calledWith('The total is: 10')).to.be.equal(true);
    expect(spy.log.callCount).to.be.equal(1);
    stub.restore();
    spy.log.restore();
  });
});
