// pattern 1 (square)

// input=4
// output=
// ****
// ****
// ****
// ****

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << " * ";
            j = j + 1;
        }

        cout << endl;

        i = i + 1;
    }
}


// pattern 2 (no in line)

// input=3
// output=
// 111
// 222
// 333

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << "  "<< i;
            j = j + 1;
        }

        cout << endl;

        i = i + 1;
    }
}


// pattern 3 (downward left triangle)

// input=4
// output=
// 1111
// 222
// 33
// 4

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = i;
        while (j <= n)
        {
            cout << "  "<< i;
            j = j + 1;
        }

        cout << endl;

        i = i + 1;
    }
}


// pattern 4(print upto that no which is input)

// input=3
// output=
// 123
// 123
// 123

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << "  "<< j;
            j = j + 1;
        }

        cout << endl;

        i = i + 1;
    }
}

// pattern 5(print opposite upto that no which is input)

// input=3
// output=
// 321
// 321
// 321

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = n;
        while (j >= 1)
        {
            cout << "  "<< j;
            j = j - 1;
        }

        cout << endl;

        i = i + 1;
    }
}


// pattern 6(print continues no upto n)

// input=3
// output=
// 123
// 456
// 789

#include <iostream>
using namespace std;
int main()
{
    int count = 1;
    int n;
    cin >> n;
    int i = 1;

    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << "  "<< count<<"";
            count = count + 1;
            j = j + 1;
        }

        cout << endl;

        i = i + 1;
        
    }
}


// pattern7(triangle pattern)
// input=3
// output=
// *
// **
// ***

#include <iostream>
using namespace std;
int main()
{
    
    int n;
    cin >> n; 
    int row = 1;

    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            cout << " * ";
            col = col + 1;
        }

        cout << endl;

        row = row + 1;
        
    }
}


// pattern8(no triangle)
// input= 3
// output=
// 1
// 22
// 333