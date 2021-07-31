/*Develop a C program for MegeSort*/ 
#include<stdio.h>
#include <time.h>
#include <limits.h>
void readArray(int [], int);
void mergesort(int [], int, int);
void merge(int [], int, int, int);
void printarray(int [], int);
int i=0;
void main()
{
	int a[50], n;
	clock_t tstart,tend;
	printf("Enter total number of elements you want to sort:  ");
	scanf("%d",&n);
	readArray(a, n);
	printf("\nBefore Sorting: \n");
	printarray(a,n);
	tstart=clock(); 
	mergesort(a,0,n-1);
	tend=clock(); 
	printf("\nAfter Sorting: \n");
	printarray(a,n);
	printf("\nTime taken in Merge Sort: %.6fs\n", ((double)(tend - tstart) )/ CLOCKS_PER_SEC);
}
void readArray(int a[], int n)
{
	printf("Enter the elements to be sorted: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}	
}
void mergesort(int a[], int lb, int ub)
{
	if(lb<ub)
	{
		int mid=(lb+ub)/2;
		mergesort(a,lb,mid);
		mergesort(a,mid+1,ub);
		merge(a,lb,mid,ub);
	};
}
void merge(int a[], int lb, int mid, int ub)
{
	int i=lb, j=mid+1, k=lb, b[50];
	while(i<=mid && j<=ub)
	{
		if(a[i]<=a[j])
		{
			b[k]=a[i];
			i++;
		}
		else{
			b[k]=a[j];
			j++;
		}
		k++;
	}
	if(i>mid)
	{
		while(j<=ub)
		{
			b[k]=a[j];
			j++;
			k++;
		}
	}
	else
	{
		while(i<=mid)
		{
			b[k]=a[i];
			i++;
			k++;
		}
	}
	for(k=lb;k<=ub;k++)
	{
		a[k]=b[k];
	}	
}
void printarray(int a[], int n)
{
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
 
