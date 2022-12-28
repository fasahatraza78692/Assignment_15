#include<stdio.h>
int Duplicate_num(int arr[],int size)
{
  int i,j,count=0;
  for(i=0;i<size-1;i++)
   {
   	 for(j=i+1;j<size;j++)
   	  {
   	  	if(arr[i]==arr[j])
   	  	 {
   	  	 	count++;
   	  	 	break;
		 }
	  }
   }
   return count;
}
int main()
{
	int i,n;
	printf("Enter the size of array\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter %d elements\n",n);
	for(i-0;i<n;i++)
	 scanf("%d",&arr[i]);
	printf("Total number of duplicate = %d",Duplicate_num(arr,n));
	return 0;
}
