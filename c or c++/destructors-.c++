
#include <iostream>
using namespace std;

class helloworld{
    public:
    //constructor
    helloworld(){
        cout<<"constructor is called"<<endl;
    }
    //destructor
    ~helloworld(){
        cout<<"destructor is called"<<endl;
    }
    //member function
    void display(){
        cout<<"hello world from member function"<<endl;
    }
};

int main()
{
    helloworld obj; //object created
    obj.display();

    return 0;
}