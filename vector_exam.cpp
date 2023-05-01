#include <iostream>
#include <vector>   
#include <stdexcept>
using namespace std;

int main(){

//vector<int> v1={1,4,7,9};  //c++11 list initializers for vectors 
vector<int> v1(4); // determine the number of elements without assign
for( int i=0; i<v1.size(); i++){  // initial value for each elements in vector is 0
    cin>>v1[i];
}

//for( int &i:v1){      //print way1
 //   cout<<i<<" ";
//}
/*for( int i=0; i<v1.size(); i++){ 
    cin>>v1[i];
}*/
for( int i=0; i<v1.size(); i++){ //print way2
    cout<<v1[i]<<" ";
}
cout<<endl;
cout<<"the number of elements are "<<v1.size();
cout<<endl;
//cout<<v1.at(9); //execute the code with no error
v1.push_back(100);

for(int j:v1){
    cout<<j<<" ";
}

}