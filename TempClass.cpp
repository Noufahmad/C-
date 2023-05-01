#include<iostream>
using namespace std;

template<class T>

class compute{
  private:
    T Number1;
    T Number2;

  public:
    compute(T a, T b){
        Number1=a;
        Number2=b;
    }
    T sum(){
        return Number1+Number2;
    }

    T Difference(){
        return Number1-Number2;
    }

    T Product(){
        return Number1*Number2;
    }

    T div(){
        return Number1/Number2;
    }
    void printResullt(){
        cout<<"The Numbers are: "<<Number1 << "\t"<<Number2<<endl;
        cout<<" The amount is: "<<sum()<<endl;
        cout<<" The Difference is: "<<Difference()<<endl;
        cout<<" The Product is: "<<Product()<<endl;
        cout<<" The Division quotient is: "<<div()<<endl;
    }
};

int main(){
    compute ob1(1,2);
    compute ob2(1.1,2.2);

    cout<<"The intger numbers: "<<endl;
    ob1.printResullt();

    cout<<"The float numbers: "<<endl;
    ob2.printResullt();
    
    return 0;
}