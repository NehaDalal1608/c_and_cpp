#include<stdio.h>
void main()
{
int a[6]={3,6,7,8,9,2};
int b[6],i;
for(i=0;i<6;i++)
{
b[i]=a[i];
}
printf("The first array is:");
for(i=0;i<6;i++)
{
printf("%d",a[i]);
}
printf("\nThe second array is:");
for(i=0;i<6;i++)
{
printf("%d",b[i]);
}
}

