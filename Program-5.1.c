

#include <stdio.h>
 
void main()
{
   int m, n, i, j, matrix[10][10], maximum;
 
   printf("Enter the number of rows and columns\n");
   scanf("%d%d",&m,&n);
   printf("Enter the elements\n");
 
   for(  i= 0 ;  i< m ; i++ )
   {
      for( j= 0 ; j< n ; j++ )
      {
         scanf("%d",&matrix[i][j]);
      }
   }
 
   maximum = matrix[0][0];
 
   for( i= 0 ; i< m ;i++ )
   {
      for( j= 0 ; j< n ; j++ )
      {
         if ( matrix[i][j] > maximum )
            maximum = matrix[i][j];
      }
   }
 
   printf("%d", maximum);
 
  
  
}
