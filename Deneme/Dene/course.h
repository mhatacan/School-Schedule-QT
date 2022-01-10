#ifndef COURSE_H
#define COURSE_H
#include <map>

using namespace std;

typedef map<int,int> Courses;
typedef multimap<string,pair<int,int>> Mid;

class course
{
public:
    course();

    void setCourseID(int);

    void setCourseHour(int);

    int getCourseID() const;

    int getCourseHour() const;

    void addCourse();

    void makeSchedule();

    Courses getCourseMap() const;

    Mid getSchMap() const;

protected:
    int courseID;

    int courseHour;

    Courses Coursee;

    Mid Sch;
};
#endif // COURSE_H
