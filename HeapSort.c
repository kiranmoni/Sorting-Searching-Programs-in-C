#include<stdio.h>
#define MAX 100
void readArray(int [], int);
void heapSort(int [], int);
void heapify(int [], int, int);
void printArray(int [], int);
int i, temp;
void main()
{
	int a[MAX], n;
	printf("Enter total number of elements you want to sort:  ");
	scanf("%d",&n);
	readArray(a, n);
	printf("\nBefore Sorting:	");
	printArray(a, n);
	heapSort(a, n);
	printf("\nAfter Sorting:	");
	printArray(a, n);
}
void readArray(int a[], int n)
{
	printf("Enter the elements to be sorted: \n");
	for(i=1;i<=n;i++)
	{
		scanf("%d", &a[i]);
	}	
}
void heapSort(int a[], int n)
{
	for(i=n/2;i>=1;i--)
	{
		heapify(a, n, i);
	}
	for(i=n;i>=1;i--)
	{
		temp=a[1];
		a[1]=a[i];
		a[i]=temp;
		heapify(a, i-1, 1);
	}
}
void heapify(int a[], int n, int i)
{
	int largest=i, left=(2*i), right=(2*i)+1;
	if(left<=n && a[left]>a[largest])
	{
		largest=left;
	}
	if(right<=n && a[right]>a[largest])
	{
		largest=right;
	}
	if(largest!=i)
	{
		temp=a[largest];
		a[largest]=a[i];
		a[i]=temp;
		heapify(a, n,largest);
	}
}
void printArray(int a[], int n)
{
	for(i=1;i<=n;i++)
	{
		printf("%d  ",a[i]);	
	}	
}

