// with for loop
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << " Enter the value of n " << endl;
    cin >> n;
    bool isPrime = 1;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << "Not prime" << endl;
            isPrime = 0;
            break;
        }  
    }

if (isPrime == 0)
{
    cout<<"Not Prime"<<endl;
}
else{
    cout<<"Is Prime"<<endl;
}
    return 0;
}
