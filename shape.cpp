#include<iostream>
#include <string>
using namespace std;
 
class Shape
{
	private:
string name;
	int angles;
public:

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

class Parallelogram: public Shape
{
	// data members are private , access only by Parallelogram members
	private:
	int length;
	int width;
    public:
    // default constructer
    Parallelogram(){
		cout<<" this is the Parallelogram default constructer "<<endl;
	}
     // data members are public so it can be access by main 
	 //int length, width;
	 // paramitized constructer
    Parallelogram(string n,int a,int L,int W):Shape(n,a){
    length=L;
	width=W;
	}
	void print(){
		cout<<"angle"<<getangles()<<endl;
		cout<<"name"<<getname()<<endl;
	}
    void getli()
	{
		cout<<length<<endl;
	}
	 void getwi()
	{
		cout<<width<<endl;
	}
	int getarea()
	{
		return length * width;
	}
	/*int getangles()
	{
		cout<<"this is the Parallelogram and it has an angle equal:  ";
		int a=getangles();
		a=a+10;
		return a;
		}*/
	
};

class Circle: public Shape
{
public:
 int radius;
// default constructer
    Circle(){
		radius=1;
	}
// paramitized constructer, we can call setradius function inside constructer rather than line 55
    Circle(int ra){
		cout<<"this is the circle paramitized constructer "<<endl;
		radius=ra;
	}
	// te give a ridius value , also we can use radis data member directly from main because it is public member
	void setradius(int r){
		radius=r;
	}
	double getarea()
	{
		return 3.14 * radius * radius;
	}

};



int main()
{   
	
    Parallelogram S("Square",40,4,4);
	S.print();
	cout<<S.getarea()<<endl;
    
	
	
	/*Circle C(10);
    :Shape(n,a){
    //S.name = "Parallelogram";
	//S.length = 4;
	//S.width = 6;
	//S.angles = 4;
	//call constructer
    
	C.name = "Circle";
	C.angles = 0;
	
    //if we call the constructer we do not need to call setradius function
	//C.setradius(3);
	//////////////contructor neeeeeeds fix
	//cout <<"Then name of shape S is:"<<S.getname();
	//cout <<"\nShape S has: "<<S.getangles()<<" angles";
	//cout <<"\nThe length of square is: "<<getli();
	//cout <<"\nThe width of square is: "<<getwi();
	cout <<"\nThe area of "<<S.name<< " is: "<<S.getarea();
	// overide function and here call getangles from Parallelogram class not shape class 
	//because we are use object from Parallelogram class 
	
	
	cout<<"\n\n*****************************";

	cout <<"\n\nThen name of shape C is:"<<C.getname();
	cout <<"\nShape C has: "<<C.getangles()<<" angles";
	cout <<"\nThe radius of circle is: "<<C.radius; // we can call the data member directly because it is public
	cout <<"\nThe area of circle is: "<<C.getarea(); */
}