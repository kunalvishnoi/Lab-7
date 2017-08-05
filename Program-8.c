#include <stdio.h>
void main()
{
int arr[100];
int i,n,key,pos;
printf("enter the size of elements");
scanf("%d",&n);
for (i=0;i<n;i++)
{	scanf("%d",&arr[i]);
}
printf("enter the element to insert");
scanf("%d",&key);
printf("enter the position");
scanf("%d",&pos);
for(i=n;i>=pos;i--)
{
	arr[i]=arr[i-1];
}
n++;
arr[pos-1]=key;

for(i=0;i<n;i++)
	printf("%d",arr[i]);

}