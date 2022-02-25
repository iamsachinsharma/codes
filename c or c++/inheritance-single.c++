//Inheritance
//Single inheritance

#include <iostream>
using namespace std;

class teacher{
    public:
    teacher(){
        cout<<"hey, Iam a teacher"<<endl;
    }

    string collegename = "Youtube college";
};

class mathteacher: public teacher{
    public:
    mathteacher(){
        cout<<"Iam a math teacher"<<endl;
    }
};

int main()
{
    mathteacher obj;
    cout<<"college name is: "<<obj.collegename<<endl;
    return 0;
}