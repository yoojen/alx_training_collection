const assert = require('assert');
const calculateNumber = require('./1-calcul');

describe('Test suit for task 2', () => {
  it('check for summation', () => {
    assert.strictEqual(calculateNumber('SUM', 3.5, 5.4), 9);
  });
  it('checks for subtraction', () => {
    assert.strictEqual(calculateNumber('SUBTRACT', 5.6, 4.7), 1);
  });
  it('checks for division', () => {
    assert.strictEqual(calculateNumber('DIVIDE', 5.7, 2.3), 3);
  });
  it('checks for division error', () => {
    assert.strictEqual(calculateNumber('DIVIDE', 4.0, 0.3), 'Error');
  });
});
