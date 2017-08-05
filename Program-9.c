#include <stdio.h>
void main()
{
int arr[100];
int i,n,pos;
printf("enter the size of elements");
scanf("%d",&n);
for (i=0;i<n;i++)
{	scanf("%d",&arr[i]);
}

printf("enter the position");
scanf("%d",&pos);
for(i=pos-1;i<n-1;i++)
{
	arr[i]=arr[i+1];
}
n--;


for(i=0;i<n;i++)
	printf("%d",arr[i]);

}