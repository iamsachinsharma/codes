
// Example 1:
#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    i = i++ + ++i;
    cout << i << endl;
    return 0;
}

// Example 2:
#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    int j = 2;
    int k;
    k = i + j + i++ + j++ + ++i + ++j;
    cout << i << " " << j << " " << k << endl;
    return 0;
}

// Example 3:
#include <iostream>
using namespace std;

int main()
{
    int i = 0;
    i = i++ - --i + ++i - i--;
    cout << i << endl;
    return 0;
}

// Example 4:
#include <iostream>
using namespace std;

int main()
{
    int i = 1, j = 2, k = 3;
    int m = i-- - j-- - k--;

    cout << i << endl;
    cout << j << endl;
    cout << k << endl;
    cout << m << endl;
    return 0;
}

// Example 5:
#include <iostream>
using namespace std;

int main()
{
    int i=10, j=20, k;
    k = i-- - i++ + --j - ++j + --i - j-- + ++i - j++;

    cout<<i<<endl;
    cout<<j<<endl;
    cout<<k<<endl;
    return 0;
}
