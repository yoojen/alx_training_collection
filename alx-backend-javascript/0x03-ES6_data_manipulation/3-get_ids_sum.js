export default function getStudentIdsSum(students) {
  const initialValue = 0;
  return students.reduce((accumulator, current) => accumulator.id
|| accumulator + current.id, initialValue);
}
