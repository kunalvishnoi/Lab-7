
#include <stdio.h>
 
int main()
{
    int A[3][3], B[3][3], C[3][3];
    int row, col, i, sum;
 
   
    for(row=0; row<3; row++)
    {
        for(col=0; col<3; col++)
        {
            scanf("%d", &A[row][col]);
        }
    }
 
    
   
    for(row=0; row<3; row++)
    {
        for(col=0; col<3; col++)
        {
            scanf("%d", &B[row][col]);
        }
    }
 
   
    for(row=0; row<3; row++)
    {
        for(col=0; col<3; col++)
        {
            sum = 0;
            
            for(i=0; i<3; i++)
            {
                sum =sum+A[row][i] * B[i][col];
            }
 
            C[row][col] = sum;
        }
    }
 
   
 
    return 0;
} 
 

   

