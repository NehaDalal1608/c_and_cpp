#include<stdio.h>
void main()
{
int a[100],i,n,min,max;
printf("enter the size of the array:");
scanf("%d",&n);
printf("enter elements in array:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
min=max=a[0];
for(i=1;i<n;i++)
{
if(min>a[i])
min=a[i];
if(max<a[i])
max=a[i];
}
printf("minimum of array is: %d",min);
printf("\n maximum of array is: %d",max);
}


/*enter the size of the array:5
enter elements in array:1
3
6
7
8
minimum of array is: 1
maximum of array is: 8*\








