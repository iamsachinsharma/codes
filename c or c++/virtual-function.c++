#include <iostream>
using namespace std;

class base
{
public:
    virtual void print()
    {
        cout << " Iam from base class " << endl;
    }
    void show()
    {
        cout << "Iam from base class" << endl;
    }
};

class derived : public base
{
public:
    void print()
    {
        cout << " Iam from derived class " << endl;
    }
    void show()
    {
        cout << "Iam from derived class" << endl;
    }
};

int main()
{
    base *bptr;
    derived d;
    bptr = &d;

    bptr->print();
    bptr->show();

    return 0;
}