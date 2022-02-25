#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cout << "enter no: ";
    cin >> n;

    int sum = 1;
    int originaln = n;
    while (n > 0)
    {
        int lastdigit = n % 10;
        sum += pow(lastdigit, 3);
        n = n / 10;
    }

    cout << "the sum of cube root is: " << sum << endl;

    if (sum == originaln)
    {
        cout << "it is armstrong no" << endl;
    }
    else
    {
        cout << "no it is not armstrong no " << endl;
    }

    return 0;
}