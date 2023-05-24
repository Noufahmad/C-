#include<iostream>
using namespace std;

class Vehicle
{
  private:
    int wheels=444;
  protected :
     int passenger=999;
  public:
    Vehicle(){
      cout<<"This is the Vehicle default constructer"<<endl;;
    }
    void outputdata(){
        cout<<passenger;
    }
   
};

class Hvehicle : public Vehicle
{
    int diesel_petrol;
  protected :
    int load;
  public:
  Hvehicle(){
    cout<<"This is the default Hvehicle constructer "<<endl;
  }
  int nevar;
   //void readdata(int, int);
   int set(int l,int d){
    diesel_petrol=d;
    load=l;
   }
   void callfun(){
    cout<<"call function from other class ";
    outputdata();
   }
    void writedata(){
        cout<<passenger<<endl;
        cout<<load<<endl;
        cout<<diesel_petrol<<endl;
    }
};

class Bus : public Hvehicle
{
    char make[20];
  public :
     Bus(){
      cout<<"This is the default Bus constructer"<<endl;
     }
    void fetchdata(char a){
       make[0]=a;
       cout<< make[0];
    }
   
};

int main(){
     Bus V1;
     /*Hvehicle H1;
     H1.set(44,91);
     H1.callfun();
     H1.outputdata();
     H1.writedata();

     H1.nevar=1;*/
}