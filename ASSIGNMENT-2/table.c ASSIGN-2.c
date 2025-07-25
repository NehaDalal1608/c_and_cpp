#include<stdio.h>
void main()
{
int num,i,table;
printf("\n Enter the number:");
scanf("%d",&num);
printf("\n Table of %d is:\n",num);
for(i=1;i<=10;i++)
{
table=num*i;
printf("%d=%2d\n",num,table);
}
}

/*ubuntu@ubuntu-OptiPlex-5090:~/Desktop$ ./a.out

 Enter the number:6

 Table of 6 is:
6= 6
6=12
6=18
6=24
6=30
6=36
6=42
6=48
6=54
6=60*/


