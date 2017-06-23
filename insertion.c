#include<stdio.h>
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
int arr[5]={23,12,56,34,10},n,j;
sort(arr);
printf("Sorted Array\n");
for(j=0;j<5;j++)
printf("%d ",arr[j]);
printf("\n");
}

  
