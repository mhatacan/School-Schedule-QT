#include "course.h"

course::course()
{

}

void course::setCourseID(int courseID){
    this->courseID = courseID;
}

void course::setCourseHour(int courseHour){
    this->courseHour = courseHour;
}

int course::getCourseID() const{
    return this->courseID;
}

int course::getCourseHour() const{
    return this->courseHour;
}

void course::addCourse(){
    Courses::iterator it;
    it = Coursee.find(getCourseID());
    if(it!=Coursee.end())
        throw invalid_argument("This course is available please try another course.");
    else if(getCourseID()<-1 || getCourseHour()<=0)
        throw invalid_argument("You entered an invalid value please try again.");
    else
        Coursee.insert(Courses::value_type(getCourseID(), getCourseHour()));
}

void course::makeSchedule(){
    int ctrMonday=1, ctrTuesday=1, ctrWednesday=1, ctrThursday=1, ctrFriday=1;
    Sch.clear();
    for(Courses::iterator it=Coursee.begin();it!=Coursee.end();it++){
        for(int i=0; i<it->second; i++){
            if(ctrMonday<7){
                Sch.insert(Mid::value_type("Monday",pair<int,int>(ctrMonday,it->first)));
                ctrMonday++;
            }
            else if(ctrTuesday<7){
                Sch.insert(Mid::value_type("Tuesday",pair<int,int>(ctrTuesday,it->first)));
                ctrTuesday++;
            }
            else if(ctrWednesday<7){
                Sch.insert(Mid::value_type("Wednesday",pair<int,int>(ctrWednesday,it->first)));
                ctrWednesday++;
            }
            else if(ctrThursday<7){
                Sch.insert(Mid::value_type("Thursday",pair<int,int>(ctrThursday,it->first)));
                ctrThursday++;
            }
            else if(ctrFriday<7){
                Sch.insert(Mid::value_type("Friday",pair<int,int>(ctrFriday,it->first)));
                ctrFriday++;
            }
        }
    }
}

Courses course::getCourseMap() const{
    return Coursee;
}

Mid course::getSchMap() const{
    return Sch;
}
