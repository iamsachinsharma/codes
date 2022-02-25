
// prime no or not

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int n;
  cout << "enter no: ";
  cin >> n;
  bool flag = 0;
  for (int i = 2; i <= sqrt(n); i++)
  {

    if (n % i == 0)
    {
      cout << "Non prime" << endl;
      flag = 1;
      break;
    }
  }
  if (flag == 0)
  {
    cout << "prime" << endl;
  }

  return 0;
}

// prime no between 2 given no

#include <iostream>
#include <cmath>
using namespace std;

bool isprime(int num)
{
  for (int i = 2; i < sqrt(num); i++)
  {
    if (num % i == 0)
    {
      return false;
    }
  }
  return true;
}

int main()
{
  int a, b;
  cout << "enter no: ";
  cin >> a >> b;

  for (int i = a; i <= b; i++)
  {
    if (isprime(i))
    {
      cout << i << endl;
    }
  }

  return 0;
}