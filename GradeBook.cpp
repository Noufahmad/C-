#include <iostream> 
#include "c1.h" 
#include<string>
using namespace std;

GradeBook:: GradeBook(){

    courseName="U";
    instructorName="U";

}
GradeBook::GradeBook(string course, string inst)//constructer
{
   setCourseName(course);
   setInstructorName(inst);
}

void GradeBook::setCourseName(string course){
    courseName=course;
}

void GradeBook::setInstructorName(string inst){
    instructorName=inst;
}

string GradeBook::getCourseName()  
{
    return courseName;
}

string GradeBook::getInstructorName() 
{
    return instructorName;
}

void GradeBook::displayMessage()
{
    cout<<"\n whelcome to the grade book for: "<<getCourseName()<<endl;
    cout<<"\n This course is presented by: "<<getInstructorName()<<endl;
}