#include<stdio.h>
 void main()
{
int a[10],i,n,max,min;
printf("\n enter the size of array:");
scanf("%d",&n);
printf("enter the n element in the array:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
max=a[0];
for(i=0;i<n;i++)
{
if(a[i]>max)
{
max=a[i];
}
}
min=a[0];
for(i=0;i<n;i++)
{
if(a[i]<min)
{
min=a[i];
}
}
printf("maximum element=%d:\n",max);
printf("minimum element=%d",min);
}
 
 
/*
output:
enter the size of array:5
enter the n element in the array:23 34 56 8 90
maximum element=90:
minimum element=8*/
