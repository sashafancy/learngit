#include <iostream>

extern int count = 0;

int partition(int arr[], int left, int right)
{
	// int pivot = arr[left];

	/*
	int temp1 = arr[right];
	arr[right] = arr[left];
	arr[left] = temp1;
	*/

	// exchange the first element with the last element,
	// then continue as choosing the first element as pivot

	int mid = (left + right) / 2;
	int min = left, max = left;

	if (arr[mid] < arr[min])
		min = mid;
	else
		max = mid;

	if (arr[right] < arr[min])
		min = right;
	else if (arr[right]>arr[max])
		max = right;

	int median = left + mid + right - min - max;

	int temp2 = arr[median];
	arr[median] = arr[left];
	arr[left] = temp2;


	int pivot = left;
	int i = pivot + 1;
	count = count + right - left;
	for (int j = i; j <= right; j++)
	if (arr[j] < arr[pivot])
	{
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
		i++;
	}
	int temp = arr[pivot];
	arr[pivot] = arr[i-1];
	arr[i-1] = temp;
	return i-1;

}

void quicksort(int arr[], int left, int right)
{
	if (left < right)
	{
		int pivot = partition(arr, left, right);
		if (left < pivot-1)
			quicksort(arr, left, pivot-1);
		if (pivot<right-1)
			quicksort(arr, pivot + 1, right);
	}
}

void quickSort(int arr[], int array_size)
{
	//int *temp = (int *)malloc(sizeof(int)*array_size);
	return quicksort(arr, 0, array_size - 1);
}

int main(int argv, char** args)
{

	int arr[] = { 2148,
		9058,
		7742,
		3153,
		6324,
		609,
		7628,
		5469,
		7017,
		504 };
	quickSort(arr, 10);
	printf(" Number of counts are %d \n", count);
	getchar();
	return 0;
}