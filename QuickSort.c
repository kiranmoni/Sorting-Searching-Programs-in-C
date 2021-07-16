#include <stdio.h>
#define MAX 100
void swap(int *, int *);
int quickSort(int [], int , int);
int partition(int [], int, int);
void readArray(int [], int );
void printArray(int [], int );
int main()
{
	int arr[MAX], n, size;
	printf("Enter total number of elements you want to insert into an array:\n");
	scanf("%d",&size);
	printf("\nEnter elements into an array:\n");
	readArray(arr, size);
	printf("\nElement in an unsorted array:\n");
	printArray(arr, size);
	quickSort(arr, 0, size-1);
	printf("Sorted array: \n");
	printArray(arr, size);
	return 0;
}
/* Function to read an array */
void readArray(int arr[], int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
}
/* Function to print an array */
void printArray(int arr[], int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
//quicksort function
int quickSort(int arr[], int lowerBound, int upperBound)
{
	int key;
	if(lowerBound<upperBound)
	{
		key = partition(arr, lowerBound, upperBound);
		quickSort(arr, lowerBound, key-1);
		quickSort(arr, key+1, upperBound);	
	}
}
//partitioning the array
int partition(int arr[], int lowerBound, int upperBound)
{
	int pivot, start, end;
	pivot = arr[lowerBound];
	start = lowerBound;
	end = upperBound;
	while(start<end)
	{
		while(arr[start]<=pivot)
		{
			start++;	
		}
		while(arr[end]>pivot)
		{
			end--;
		}
		if(start<end)
		{
			swap(&arr[start], &arr[end]);
		}
	}
	swap(&arr[lowerBound], &arr[end]);
	return end;
	
}
//Swapping
void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}


