// half pyramid after 180 degree rotation
//         *
//        **
//       ***
//      ****
//     *****

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter no: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j <= n - i)
            {
                cout << "  ";
            }
            else
            {
                cout << "* ";
            }
        }
        cout << endl;
    }
    return 0;
}




// half pyramid using numbers
//         1
//         2 2
//         3 3 3
//         4 4 4 4
//         5 5 5 5 5

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter no: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
            cout << i << " ";
        cout << endl;
    }

    return 0;
}