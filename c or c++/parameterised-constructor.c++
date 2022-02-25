#include <iostream>
using namespace std;

class add
{
    public:
    add(int num1, int num2)
    {
        cout << (num1 + num2) << endl;
    }
};

int main()
{
    add obj(10, 20);
    return 0;
}