//Write a C++ program to compute the sum of the two given integers and count the number of digits of the sum value.

#include <iostream>
using namespace std;
int main()
{
   int x, y, c;
   int count = 0;
   cout << "Name: Sachin Sharma" << endl;
   cout << "Class: 26-B" << endl;
   cout << "UId: 20BCS2743" << endl;

   cout << "Enter any two integer:" << endl;
   cin >> x >> y;

   c = x + y;

   cout << "The sum is: " << c << endl;

   while (c != 0)
   {
      c /= 10;
      ++count;
   }
   cout << "No. of digit of sum value is: " << count;

   return 0;
}
