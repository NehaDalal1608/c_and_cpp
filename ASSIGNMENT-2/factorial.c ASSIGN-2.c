#include<stdio.h>
void main()

{
int num,fact=1,n;
printf("Enter a number=\n");
scanf("%d",&n);

for(num=1;num<=n;num++)
fact=fact*num;

printf("The factorial of the given number is = %d\n",fact);
}

