//Counting sort for all the positive integers
#include<stdio.h>
#define MAX 100
void readArray(int [], int);
void countingSort(int [], int);
void printArray(int [], int);
int i;
void main()
{
	int a[MAX], n;
	printf("Enter total number of elements you want to sort:  ");
	scanf("%d",&n);
	readArray(a, n);
	printf("\nBefore Sorting:	");
	printArray(a, n);
	countingSort(a, n);
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
void countingSort(int a[], int n)
{
	int count[MAX]={0}, k=0, b[MAX];
	for(i=0;i<n;i++)
	{
		if(a[i]>=k)
		{
			k=a[i];
		}
	}
	for(i=0;i<n;i++)
	{
		++count[a[i]];
		
	}
	for(i=1;i<=k;i++)
	{
		count[i]=count[i]+count[i-1];
	}
	for(i=n-1;i>=0;i--)
	{
		b[--count[a[i]]]=a[i];
	}
	for(i=0;i<n;i++)
	{
		a[i]=b[i];
	}
}
void printArray(int a[], int n)
{
	for(i=0;i<n;i++)
	{
		printf("%d  ",a[i]);	
	}	
}

