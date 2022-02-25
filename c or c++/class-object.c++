/* In this program we are learning class and objects*/

/*
class class_name
{

};
*/

#include <iostream>
using namespace std;

class car
{
    
    char color[10];
    public:
    int speed;

public:
    void getdata(int distance, int fuel)
    {
        cout << "The car hass covered " << distance << "km and has consumed " << fuel << "L fuel" << endl;
    }

    void milage(float d, float f);

    void carspeed()
    {
        cout<<"The speed of car is " <<speed <<"km"<<endl;

    } 

    /*function declare inside the class

        void milage(float d, float f)
    {
        float carmilage = d / f;
        cout << "The milage of car is " << carmilage << endl;
    }
    */
} audi, bugatti;

// function declare outside the class
void car ::milage(float d, float f)
{
    float carmilage = d / f;
    cout << "The milage of car is " << carmilage << endl;
}

int main()
{
    car swift;
    // swift.getdata(130, 7);
    // audi.getdata(150, 25);
    // bugatti.getdata(400, 100);
    // swift.milage(1304, 70);
    // bugatti.milage(39393, 383);

    bugatti.speed = 400;
    bugatti.carspeed();

    return 0;
}
