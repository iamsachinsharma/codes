
//Write a program to convert the expression “a+b” into “+ab”

#include <iostream>
using namespace std;
void Merge(float a[], int low, int high, int mid)
{
	// We have low to mid and mid+1 to high already sorted.
	int i, j, k;
	float temp[high - low + 1];
	i = low;
	k = 0;
	j = mid + 1;
	// Merge the two parts into temp[].
	while (i <= mid && j <= high)
	{
		if (a[i] > a[j])
		{
			temp[k] = a[i];
			k++;
			i++;
		}
		else
		{
			temp[k] = a[j];
			k++;
			j++;
		}
	}
	// Insert all the remaining values from i to mid into temp[].
	while (i <= mid)
	{
		temp[k] = a[i];
		k++;
		i++;
	}
	// Insert all the remaining values from j to high into temp[].
	while (j <= high)
	{
		temp[k] = a[j];
		k++;
		j++;
	}
	// Assign sorted data stored in temp[] to a[].
	for (i = low; i <= high; i++)
	{
		a[i] = temp[i - low];
	}
}
// A function to split array into two parts.
void MergeSort(float a[], int low, int high)
{
	int mid;
	if (low < high)
	{
		mid = (low + high) / 2;
		// Split the data into two half.
		MergeSort(a, low, mid);
		MergeSort(a, mid + 1, high);

		// Merge them to get sorted output.
		Merge(a, low, high, mid);
	}
}
int main()
{
	int n, i;
	cout << "Enter the number of data element to be sorted: ";
	cin >> n;

	float arr[n];
	for (i = 0; i < n; i++)
	{
		cout << "Enter element " << i + 1 << ": ";
		cin >> arr[i];
	}
	MergeSort(arr, 0, n - 1);
	// Printing the sorted data.
	cout << "\nSorted Data in descending order:";
	for (i = 0; i < n; i++)
		cout << " " << arr[i];
	return 0;
}