#include <iostream>
using namespace std;

class cal {
friend std::ostream& operator<<( std::ostream& output, const cal &p);
private:
int x;
int y;

public:
cal(int x1){
     x=x1; 
}

int getX() const { return x; }
int getY() const { return y; }

void operator +( int value ) {
  cout<<x+value<<endl;
}  
void operator +( cal ob2 ) {
  cout<<x+ob2.x<<endl;
}   




/*cal operator +(cal c1){
     return cal(x+c1.x);
    //cout<<y-c1.y;
}
cal operator +(int v) const
 {
   return cal(x + v);
 }*/

void  operator-(cal c1){
    cout<<x-c1.x<<endl;
    //cout<<y-c1.y;
}
bool operator !=(cal c2){
   return x!=c2.x? true:false;}

bool operator ==(cal c2){
   return x==c2.x? true:false;
    //if ( x== c2.x)
   // return true;
  // else
   // return false;

    //two value of one object
   // x==c2.x && y==c2.y? true:false;
}
bool operator >(cal c2){
  
   return x>c2.x? true:false;
}
bool operator <(cal c2){
  
   return x<c2.x? true:false;
}

void operator ++(){
    ++x;
    }

void operator ++(int){
    x++;
}
void operator --(){
    --x;
}
void operator --(int){
    x--;
}
void display(){

    cout<<"the x resutl "<< x<<endl;
    cout<<"the y result "<< y<<endl;
}
};

std::ostream& operator<<( std::ostream& output, const cal &p)
 {
    output << "(" << p.getX() << ")" ;
 //output << "(" << p.getX() << "," << p.getY() << ")" ;
 return output;
 } 

int main(){
    cal cc1(8);
    cal cc2(7);
    cal cc3(0);

    --cc1;
    cc1--;
    cc1++;
    ++cc1;
    ++cc2;
    cc1+cc2;
    cc1+5;

    
    if( cc1!=cc2)
    cout<<"true "<<endl;
    //cout<<cc1!=cc2<<endl;        //error << operator do not work with objects need to br define
    else
    cout<<cc1<<"!="<<cc2<<endl;
    cout<<" no  "<<endl;
    //cc1.display();
    return 0;
}