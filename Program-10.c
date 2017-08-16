#include <stdio.h>
 
void main()
{
   int i, first, last, middle, n, key, arr[100];
 
   printf("Enter number of elements");
   scanf("%d",&n);
 
   printf("Enter  integers");
 
   for (i= 0; i < n; i++)
      scanf("%d",&arr[i]);
 
   printf("Enter value to find");
   scanf("%d", &key);
 
   first = 0;
   last = n - 1;
   middle = (first+last)/2;
 
   while (first <= last) {
      if (arr[middle] < key)
         first = middle + 1;    
      else if (array[middle] == search) {
         printf("%d found at location" middle+1);
         break;
      }
      else
         last = middle - 1;
 
      middle = (first + last)/2;
   }
   if (first > last)
      printf("Not found! ");
 
   
}