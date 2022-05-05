// Your  C++ Program

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    int a;
    int b;


    cout << " Enter no. ";
    cin >> n >> a >> b;
    
    int ans=0;
    int digit = n;
    int i=0;

    while (n!=0)
    {
        int 
        ans = (ans * 10) + digit;
        i++;
    }

    
    cout << " Answer is " << ans << endl;
    return 0;
}
