#include<stdio.h>
void main()

int num,i;
printf ("Enter a number = \n");
scanf("%d",&num);

i=2;
while(i<=num-1)
{
if(num%i==0)
{
printf("The entered number is not prime no.\n");
break;
}
i++;
}
if(i==num)
printf("The entered number is prime no.",num);
}
