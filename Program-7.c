#include <stdio.h>

void main()
{
    int arr[100];
    int i,size,sum=0;
float avg;
    
    printf("Enter size of the array: ");
    scanf("%d", &size);
    printf("Enter elements in the array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }


   
    for(i=1; i<size; i++)
    {
        
     sum=sum+arr[i];
      
    }

      avg=sum/size;
   
    printf("%d", sum);
    printf("%f", avg);
   
} 
