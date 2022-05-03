// Your  C++ Program to count from 1 to n

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;

    cout << "printing count from 1 to n" << endl;
    for (int i = 1; i <=n; i++)
    {
        cout<< i<< endl;
    }
    
    return 0;
}


// Your  C++ Program to find prime no. with for loop
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
