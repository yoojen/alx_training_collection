const assert = require('assert');
const calculateNumber = require('./0-calcul');

describe('Test suit for task one', function () {
  it('floating numbers', function () {
    assert.strictEqual(calculateNumber(3.3, 5.6), 9);
  });
  it('floating whole numbers', function () {
    assert.strictEqual(calculateNumber(2.0, 5.0), 7);
  });
  it('rounding a down and b up', function () {
    assert.strictEqual(calculateNumber(3.4, 5.7), 9);
  });
  it('rounding a up and b down', function () {
    assert.strictEqual(calculateNumber(3.8, 5.4), 9);
  });
});
