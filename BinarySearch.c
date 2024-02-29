#include<stdio.h>
void readarray(int [], int);
void printarray(int [], int);
void binary_Search(int [], int, int);
int i;
void main()
{
	int a[100],n,key;
	printf("Enter number of elements you want to insert into the Array : \t");
	scanf("%d",&n);
	readarray(a, n);
	printarray(a, n);
	printf("\nEnter the element to find in the list : \t");
	scanf("%d",&key);
	binary_Search(a, n, key);
}
void readarray(int a[], int n)
{
	printf("Enter the elements : \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}	
}
void printarray(int a[], int n)
{
	printf("The Elements in the Array are : ");
	for(i=0;i<n;i++)
	{
		printf("%d  ",a[i]);	
	}	
}
void binary_Search(int a[], int n, int key)
{
	int lower=0, upper=n-1, mid;
	while(lower<=upper)
	{
		mid=(lower+upper)/2;
		if(key==a[mid])
		{
			printf("Element Found");
			return;
		}
		else if(key>a[mid])
		{
			lower=mid+1;
		}
		else
		{
			upper=mid-1;
		}
	}
	printf("Element not Found");
}
