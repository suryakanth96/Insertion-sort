#include<stdio.h>
void read(int *arr)
{
int i,n;
printf("Enter the no.of elements\n");
scanf("%d",&n);
printf("Enter the elements\n");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
}
int sort(int *arr)
{

   int i, key, j;
   for (i = 1; i < 5; i++)
   {
       key = arr[i];
       j = i-1;
 
  
       while (j >= 0 && arr[j] > key)
       {
           arr[j+1] = arr[j];
           j = j-1;
       }
       arr[j+1] = key;
   }
}
int main()
{
int arr[5],n,j;
read(arr);
sort(arr);
printf("Sorted Array\n");
for(j=0;j<5;j++)
printf("%d ",arr[j]);
printf("\n");
}

  
