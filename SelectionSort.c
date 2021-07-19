#include<stdio.h>
#define MAX 100
void readArray(int [], int);
void selectionSort(int [], int);
void printArray(int [], int);
int i, j, temp, min;
void main()
{
	int a[MAX], n;
	printf("Enter total number of elements you want to sort:  ");
	scanf("%d",&n);
	readArray(a, n);
	printf("\nBefore Sorting:	");
	printArray(a, n);
	selectionSort(a, n);
	printf("\nAfter Sorting:	");
	printArray(a, n);
}
void readArray(int a[], int n)
{
	printf("Enter the elements to be sorted: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}	
}
void selectionSort(int a[], int n)
{
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
		}
		if(min!=i)
		{
			temp=a[i];
			a[i]=a[min];
			a[min]=temp;
		}
	}
}
void printArray(int a[], int n)
{
	for(i=0;i<n;i++)
	{
		printf("%d  ",a[i]);	
	}	
}

