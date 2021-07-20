#include<stdio.h>
#define MAX 100
void readArray(int [], int);
void shellSort(int [], int);
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
	shellSort(a, n);
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
void shellSort(int a[], int n)
{
	int gap, j, temp;
	for(gap=n/2;gap>=1;gap=gap/2)
	{
		for(j=gap;j<n;j++)
		{
			for(i=j-gap;i>=0;i=i-gap)
			{
				if(a[i+gap]>a[i])
					break;
				else
				{
					temp=a[i];
					a[i]=a[i+gap];
					a[i+gap]=temp;
				}	
			}
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

