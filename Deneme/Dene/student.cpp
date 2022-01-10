#include "student.h"
#include <iostream>

//using namespace std;

student::student()
{

}

void student::setStudentName(const string &studentName){
    this->studentName = studentName;
}

string student::getStudentName() const{
    return studentName;
}

void student::addStudent(){
    Students::iterator it;
    it = Studentt.find(getStudentName());
    if(it!=Studentt.end())
        throw invalid_argument( "This name is available please try another name. **Hint: Assume that mustafa is available but Mustafa_Kemal is not." );
    else
        Studentt.insert(Students::value_type(getStudentName(),0));
}

void student::addLessontoStudent(int CourseID){
    auto ctr=0;

    for(Students::iterator it=Studentt.begin(); it!=Studentt.end(); it++){
        if(it->first == getStudentName() && it->second == CourseID)
            (ctr)++;
    }

    if(ctr != 0)
        throw invalid_argument( getStudentName() + " has already taken this course please try another course." );
    else
        Studentt.insert(Students::value_type(getStudentName(), CourseID));

}
Students student::getStudentMap() const{
    return Studentt;
}
