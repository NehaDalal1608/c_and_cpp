#include<stdio.h>
void main()
{
int a[2][2],b[2][2],c[2][2],i,j;
printf("\n Enter matrix 1:");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("\n Enter matrix 2:");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
scanf("%d",&b[i][j]);
}
}
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
c[i][j]=a[i][j]+b[i][j];
printf("%d",c[i][j]);
}
printf("\n");
}
}

/*ubuntu@ubuntu-OptiPlex-5090:~/Desktop$ ./a.out

 Enter matrix 1:11 34 5 6

 Enter matrix 2:1 2 3 4
1236
810*/

