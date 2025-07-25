#include<stdio.h>
void main()
{
int i=0,n;
float sum,avg,num;
printf("\n Enter the no. of elements:");
scanf("%d",&n);
printf("\n Enter the numbers:");
do
{
scanf("%f",&num);
sum=sum+num;
i++;
}
while(i<n);
avg=sum/n;
printf("\n sum=%f",sum);
printf("\n average=%f",avg);
}

/*ubuntu@ubuntu-OptiPlex-5090:~/Desktop$ ./a.out

 Enter the no. of elements:5

 Enter the numbers:2 3 4 5 6

 sum=20.000000
 average=4.000000*/



