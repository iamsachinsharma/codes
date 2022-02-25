#include <iostream>
using namespace std;
int partition(float a[], int low, int high)
{
 float pivoted_e = a[low];
 int left, right;
 left = low;
 right = high;
 while (left < right)
 {
 while (a[left] <= pivoted_e)
 left++;
 while (a[right] > pivoted_e)
 right--;
 if (left < right)
 {
 float temp = a[left];
 a[left] = a[right];
 a[right] = temp;
 }
 }
 a[low] = a[right];
 a[right] = pivoted_e;
 return right;
}
void mergSort(float arr[], int low, int high)
{
 int pivot;
 if (low < high)
 {
 pivot = partition(arr, low, high);
 mergSort(arr, low, pivot - 1);
 mergSort(arr, pivot + 1, high);
 }
}
void printArray(float arr[], int size)
{
 int i;
 for (i = 0; i < size; i++)
 {
 cout << arr[i] << " ";
 }
 cout << endl;
}
int main()
{
 float arr[] = {70, 875, 66, 2, 33};
 int n = sizeof(arr) / sizeof(arr[0]);
 mergSort(arr, 0, n - 1);
 cout << "The sorted array in descending order is: ";
 for (int i = 0; i <= n / 2; i++)
 {
 float temp = arr[i];
 arr[i] = arr[n - i - 1];
 arr[n - i - 1] = temp;
 }
 printArray(arr, n);
 return 0;
}