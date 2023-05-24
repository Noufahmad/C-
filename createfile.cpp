// Creating a sequential file.
#include <iostream>
#include <string>
#include <fstream> // contains file stream processing types
#include <cstdlib> // exit function prototype              
using namespace std;

int main() {
  
 /*ofstream file ("nameoffile.txt");
 
  file<<"file2 ";
  file.close();*/
  
  ifstream file ("nameoffile.txt");

  string s;
  file>>s;
  cout<<s;
  file.close();
 
}