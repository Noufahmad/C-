#include<iostream>
#include <string>
using namespace std;
 
class Shape
{
	
public:
    string name;
	int angles;
    Shape(){
		cout<<"This is the default constructer of Shape class ";
	}
	Shape(string n,int a){
		name=n;
		angles=a;
	}
	string getname()
	{
		return name;
	}

	int getangles()
	{
		return angles;
	}
	

};


int main(){

    Shape sh1("square",70);
   
    //sh1.name="shh";
    cout<<"the name of the shape: "<<sh1.getname()<<endl;
    cout<<"the angle of the shape: "<<sh1.getangles()<<endl;
}