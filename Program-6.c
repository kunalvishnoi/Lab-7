#include <stdio.h>

void main()
{
    int arr[100];
    int i, max,size;

    
    printf("Enter size of the array: ");
    scanf("%d", &size);
    printf("Enter elements in the array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    
    max = arr[0];
    

   
    for(i=1; i<size; i++)
    {
        
        if(arr[i]>max)
        {
            max = arr[i];
        }

      
    }
   
    printf("%d", max);
   
} 
