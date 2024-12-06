export default class HolbertonCourse {
  constructor(name, length, students) {
    this.name = name;
    this.length = length;
    this.students = students;
  }

  set name(value) {
    if (typeof (value) !== 'string') {
      throw new TypeError('Name must be a string');
    }
    this._name = value;
  }

  get name() {
    return this._name;
  }

  set length(value) {
    if (typeof (value) !== 'number') {
      throw new TypeError('Length must be a number');
    }
    this._length = value;
  }

  get length() {
    return this._length;
  }

  set students(value) {
    if (!Array.isArray(value)) {
      throw new TypeError('Value must be array');
    }
    if (!value.every((element) => typeof element === 'string')) {
      throw new TypeError('array element should be string');
    }
    this._students = value;
  }

  get students() {
    return this._students;
  }
}
