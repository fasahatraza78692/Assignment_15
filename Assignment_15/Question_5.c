#include<stdio.h>
int first_occurrence(int arr[],int size)
{
	int i,j;
	for(i=0;i<size-1;i++)
	 {
	 	for(j=i+1;j<size;j++)
	 	 {
	 	 	if(arr[i]==arr[j])
	 	 	 {
	 	 	   return i;	
			 }
	 	 	     
		 }
	 }
	return -1;
}
int main()
{
	int i,n;
	printf("Enter the size of array\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements\n");
	for(i=0;i<n;i++)
	  scanf("%d",&arr[i]);
	n=first_occurrence(arr,n);
	if(n>=0)
	  printf("Index = %d",n);
	else
	  printf("Not find duplicate");
	return 0;
}
