const calculateNumber = require('./2-calcul_chai');
const { expect } = require('chai');

describe('Test suit for task 2', () => {
  describe('type == SUM', () => {
    it('round a up and b down', () => {
      expect(calculateNumber('SUM', 3.5, 5.4)).to.equal(9);
    });
    it('round a down and b up', () => {
      expect(calculateNumber('SUM', 4.3, 5.6)).to.equal(10);
    });
    it('summation of zero', () => {
      expect(calculateNumber('SUM', 0.0, 0.4)).to.equal(0);
    });
  });
  describe('type == SUBSTRACT', () => {
    it('round a up and b down', () => {
      expect(calculateNumber('SUBTRACT', 5.6, 4.3)).to.equal(2);
    });
    it('round a down and b up', () => {
      expect(calculateNumber('SUBTRACT', 5.3, 4.7)).to.equal(0);
    });
    it('subtractin of zeros value', () => {
      expect(calculateNumber('SUBTRACT', 0.5, 0.7)).to.equal(0);
    });
  });
  describe('type == DIVIDE', () => {
    it('round a up and b down', () => {
      expect(calculateNumber('DIVIDE', 5.7, 2.3)).to.equal(3);
    });
    it('round b up and a down', () => {
      expect(calculateNumber('DIVIDE', 5.4, 1.6)).to.equal(2.5);
    });
    it('error version', () => {
      expect(calculateNumber('DIVIDE', 5.7, 0.3)).to.equal('Error');
    });
  });
});
