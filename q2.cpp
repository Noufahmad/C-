#include <iostream>
using namespace std;

class Box
{
public:
       Box(){
      length=2;
	  breadth=2;
	  height=2;   
        }
	
	double Volume() 
	{
		return length * breadth * height;
	}

	double length;
	double breadth;
	double height;
};

class Rectangle : public Box {
    public:
     Rectangle():Box(){
	 }
	 
     Rectangle(double L, double B, double H )
	{
		length = L;
		breadth = B;
		height = H;
	}
    
}; 
int main()
{
	Rectangle R1;
	Rectangle R2(4, 3, 2);

	cout << " Rectangle volume = " << R1.Volume() << endl;
	cout << " Rectangle volume = " << R2.Volume() << endl;

	return 0;
}
