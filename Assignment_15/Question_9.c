#include<stdio.h>
#include<stdlib.h>
int* merge(int *arr1,int *arr2,int size)
{
	int static Arr[100],i,j,t;
     for(i=0;i<size;i++)
     	Arr[i]=arr1[i];
	j=size;
	for(i=0;i<size;i++)
	 {
	 	Arr[j]=arr2[i];
	 	j++;
	 }
	for(i=0;i<size*2-1;i++)
	 {
	 	for(j=i+1;j<size*2;j++)
	 	 {
	 	 	if(Arr[i]<Arr[j])
	 	 	 {
	 	 	 	t=Arr[i];
	 	 	 	Arr[i]=Arr[j];
	 	 	 	Arr[j]=t;
			 }
		 }
	 }
  return Arr;
}
int main()
{
	int i,n,*p;
	printf("Enter the size of array\n");
	scanf("%d",&n);
	int arr1[n],arr2[n];
	printf("Enter the 1st array elements\n");
	for(i=0;i<n;i++)
	  scanf("%d",&arr1[i]);
	printf("Enter the 2nd array elements\n");
	for(i=0;i<n;i++)
	  scanf("%d",&arr2[i]);
	p=merge(arr1,arr2,n);
	printf("Merged and sorted in decending order\n");
	  for(i=0;i<n*2;i++)
	     printf("%d ",p[i]);
	return 0;
}
