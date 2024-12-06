export default function updateStudentGradeByCity(students, city, newGrades) {
  const nullGrade = { grade: 'N/A' };
  if (Array.isArray(students) && Array.isArray(newGrades)) {
    return students
      .filter((student) => student.location === city)
      .map((student) => ({
        id: student.id,
        firstName: student.firstName,
        location: student.location,
        grade: (newGrades
          .filter((grade) => grade.studentId === student.id)
          .pop() || nullGrade).grade,
      }));
  }
  return [];
}
