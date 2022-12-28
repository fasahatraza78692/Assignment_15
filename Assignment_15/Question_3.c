#include<stdio.h>
void sort(int arr[],int size)
{
	int i,j;
	for(i=0;i<size-1;i++)
	 {
	 	for(j=i+1;j<size;j++)
	 	 {
	 	 	if(arr[i]>arr[j])
	 	 	 {
	 	 	 	arr[i]=arr[i]+arr[j];
	 	 	 	arr[j]=arr[i]-arr[j];
	 	 	 	arr[i]=arr[i]-arr[j];
			 }
		 }
	 }
	 printf("Sorted array\n");
	 for(i=0;i<size;i++)
	   printf("%d ",arr[i]);
}
int main()
{
   	int n,i;
   	printf("Enter the size of array\n");
   	scanf("%d",&n);
   	int arr[n];
   	printf("Enter the array elements\n");
   	 for(i=0;i<n;i++)
   	   scanf("%d",&arr[i]);
   	sort(arr,n);
	return 0;
}
