// Q1: It will print 0,2,4.
#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 5; i++)
    {
        cout << i << " ";
        i++;
    }

    return 0;
}

// Q2: It will become infinite loop.
#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 5; i--)
    {
        cout << i << " ";
        i++;
    }

    return 0;
}

// Q3: Print even no with 0
#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i <= 15; i += 2)
    {
        cout << i << " ";
        if (i & 1)
        {
            continue;
        }
    }

    return 0;
}

// Q4: matrix in ixj upto n
#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << i << " " << j << endl;
        }
    }

    return 0;
}

// Q5:  