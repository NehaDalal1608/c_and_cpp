#include<stdio.h>
void main()
{
int a[10],i;
printf("enter integer numbers \n");
for(i=0;i<10;i++)
scanf("%d",&a[i]);
printf("array elements are:\n");
for(i=9;i>=0;i--)
printf("%d\n",a[i]);
}
