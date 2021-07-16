#include<stdio.h>
#define MAX 100
void readarray(int [], int);
void bubblesort(int [], int);
void printarray(int [], int);
int i, j, temp;
void main()
{
	int a[MAX], n;
	printf("Enter total number of elements you want to sort:  ");
	scanf("%d",&n);
	readarray(a, n);
	printf("\nBefore Sorting:	");
	printarray(a, n);
	bubblesort(a, n);
	printf("\nAfter Sorting:	");
	printarray(a, n);
}
void readarray(int a[], int n)
{
	printf("Enter the elements to be sorted: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}	
}
void bubblesort(int a[], int n)
{
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}	
	}
}
void printarray(int a[], int n)
{
	for(i=0;i<n;i++)
	{
		printf("%d  ",a[i]);	
	}	
}
