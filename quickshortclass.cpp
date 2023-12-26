
#include <bits/stdc++.h>
using namespace std;


void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}


int partition (int array[], int low, int high)
{
	int pivot = array[high];
	int i = (low - 1);

	for (int j = low; j <= high - 1; j++)
	{

		if (array[j] < pivot)
		{
			i++;
			swap(&array[i], &array[j]);
		}
	}
	swap(&array[i + 1], &array[high]);
	return (i + 1);
void QuickSort(int array[], int low, int high)
{
	if (low < high)
	{
		int pi = partition(array, low, high);


		QuickSort(array, low, pi - 1);
		QuickSort(array, pi + 1, high);
	}
}

void Array(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}


int main()
{
	int list[] = {11, 6, 9, 2, 14, 0};
	int n = sizeof(list) / sizeof(list[0]);
	QuickSort(list, 0, n - 1);
	cout << "Sorted array: \n";
	Array(list, n);
	return 0;
}
