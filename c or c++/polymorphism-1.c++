//polymorphism part -1(function overloading)

// Polymorphism is a feature of OOPs that allows the object to behave differently in different conditions. In C++ we have two types of polymorphism:
// 1) Compile time Polymorphism – This is also known as static (or early) binding.

#include <iostream>
using namespace std;

class add {
    public:
    int sum(int num1, int num2){
        return num1+num2;
    }
    int sum(int num1, int num2, int num3){
        return num1+num2+num3;
    }

};

int main() 
{
  add obj;
  cout<<"output: "<<obj.sum(10,20)<<endl;
cout<<"output: "<<obj.sum(10,20,30)<<endl;

  return 0;
}