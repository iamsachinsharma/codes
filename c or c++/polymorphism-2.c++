/* Polymorphism Part- 2 (Function Overriding)*/

//2) Runtime Polymorphism – This is also known as dynamic (or late) binding.

#include <iostream>
using namespace std;

class A {
    public:
    void display(){
        cout<<"this is super/parent class function"<<endl;
    }
};

class B : public A{
    public:
    void display(){
        cout<<"this is base/child class function"<<endl;
    }
};

int main() 
{
  A obj;
  obj.display();

  B obj2;
  obj2.display();
  return 0;
}