#include<iostream>
#include<String>
using namespace std;

template <typename T>

T sum(T N1, T N2){
    return N1+N2;
}
template <typename T>
T sub(T N1,T N2){
    return N1-N2;
}

int main(){
int a,b;
cout<<"Enter two numbers: " <<endl;
cin>>a>>b;
cout<<"The sum of number: "<<a<<" and "<<b<< " is: "<<sum<int>(a,b);
cout<<endl;
cout<<"The diffrenece of number: "<<a<<" and "<<b<< " is: "<<sub<int>(a,b);

return 0;

}


template< typename T>
 T add(T a, T b){
    return a+b;
}


int main()
{
float n;
float j;
cin>>n;
cout<<endl;
cin>>j;
cout<<add(n,j);
return 0;

}