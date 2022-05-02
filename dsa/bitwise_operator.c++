// Your First C++ Program

#include <iostream>
#include <string>

using namespace std;
int main()
{
    int a = 4;
    int b = 6;
    // cin >>"Enter no for a :">> a >>endl;
    // cin >>"Enter no for b :">> b >>endl;
    cout << "a&b :" << (a & b) << endl;
    cout << "a|b :" << (a | b) << endl;
    cout << "a~b :" <<    ~a   << endl;
    cout << "a^b :" << (a ^ b) << endl;

    return 0;
}
