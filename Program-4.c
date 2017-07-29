#include <stdio.h>

void main() {
    int pos;
	
	    int n;
	    scanf("%d",&n);
	    int c[n],i;
	    for(i=0; i<n; i++)
	     {  scanf("%d",&c[i] );
	     }
	 int key;
	 scanf("%d",&key);
	  for(i=0;i<n;i++)
 {
     if(c[i]==key)
     {pos= i;
     break;
     }else
     pos=-1;
 }
 
 printf("%d\n",pos+1);
	     
}