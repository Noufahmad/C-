#include<iostream>
#include"c1.h"
using namespace std;

int main(){
    string nameofcourse;
    string nameofinstr;
    GradeBook gradebook; // object of class GradeBook

    cout<<"Enter the name of the course: "<<endl;
    getline(cin,nameofcourse);

    gradebook.setCourseName(nameofcourse);

    cout<<"Enter the name of the instructor: "<<endl;
    getline(cin,nameofinstr);

    gradebook.setInstructorName(nameofinstr);

    gradebook.displayMessage(); //display message of the course name an instructor name 
    
    return 0;

}