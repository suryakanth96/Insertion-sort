#include<stdio.h>
int main()
{
int arr[5]={23,12,56,34,10},n;
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

printf("Sorted Array\n");
for(i=0;i<5;i++)
printf("%d ",arr[i]);
printf("\n");
}

  
