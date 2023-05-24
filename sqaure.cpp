#include<iostream>
#include <string>
using namespace std;

class Square{

private:
  int length;
  int width;
public:
void setlandw(int l,int w){
    length=l;
	width=w;
}
//paramatized constructer
Square(int L1,int W1){
    cout<<"This is the parameterized constructer"<<endl;
    setlandw(L1,W1);
	}
// default constructer
Square(){
    cout<<"default"<<endl;
length=1;
width=1;
}
  
int getarea(){
		return length * width;
	}

void print(){
        cout<<"The area of the Square is "<<getarea()<<endl;;
    }
};


int main()
{
     int a,b;
	Square S1;
   // S1.setlandw(5,8);
   Square S2(6,4);
   //Square(6,4);
   
	S1.print();
   S2.print();
    
    a=S1.getarea();
    b=S2.getarea();
    if (a>b)
        cout<<"S1 area= "<<a<<" S1 is bigger"<<endl;
    else
       cout<<"S2 area= "<<b<<" S2 is bigger"<<endl;
    return 0;

}