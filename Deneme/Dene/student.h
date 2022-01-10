#ifndef STUDENT_H
#define STUDENT_H
#include <map>

using namespace std;

typedef multimap<string,int> Students;

class student
{
public:
    student();

    void setStudentName(const string &);

    string getStudentName() const;

    void addStudent();

    void addLessontoStudent(int CourseID);

    Students getStudentMap() const;

protected:
    string studentName;

    Students Studentt;
};
#endif // STUDENT_H
