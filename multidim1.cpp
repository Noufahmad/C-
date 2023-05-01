// Initializing multidimensional arrays.
#include <iostream>
#include <array>
using namespace std;

const size_t rows=2;
const size_t columns=3;
void printArray(const array<array<int, columns>, rows>&);//prototype - header of the function 

// old way of printing array by using long for 
/*void printArray(int arr[][columns], int r){
    for(int row=0; row<rows;++row){
      for(int cl=0; cl<columns;++cl)
        cout<<arr[row][cl]<<"  ";
        cout<<endl;
      }*/

/*void printarray1(int arr[]){
   for<int i=0; i<arr.size(); i++)
   cout<<arr[i];
}*/


int main() {
  

   array<array<int, columns>, rows> array1={1, 2, 3, 4, 5, 6};
   array<array<int, columns>, rows> array2={1, 2, 3, 4, 5};
   
   //int array1[rows][columns]={1, 2, 3, 4, 5, 6};
  // int array2[rows][columns]={1,2,3,4,5};
   cout << "Values in array1 by row are:" << endl;

   printArray(array1,rows);

   cout << "\nValues in array2 by row are:" << endl;
   printArray(array2,rows);
}

// output array with two rows and three columns                 
void printArray(const array<array<int, columns>, rows>& a) {
   // loop through array's rows                             
   for (auto const& row : a) {
      // loop through columns of current row                
      for (auto const& element : row) {
         cout << element << ' ';
      }

      cout << endl; // start new line of output             
   }
}

