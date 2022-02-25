#include <iostream>
using namespace std;
int main()
{
    int n1, n2, sum;
    float average;
    cout << "Enter no. ";
    cin >> n1;
    cin >> n2;

    sum = n1 + n2;
    average = sum / 2;
    cout << "sum is: " << sum << "\n";
    cout << "avg is: " << average << "\n";

    return 0;
} 