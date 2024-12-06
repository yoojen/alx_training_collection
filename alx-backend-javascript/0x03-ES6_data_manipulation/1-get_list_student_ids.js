export default function getListStudentIds(array) {
  const listOfIds = [];
  if (Array.isArray(array)) {
    array.map((item) => listOfIds.push(item.id));
    return listOfIds;
  }
  return [];
}
