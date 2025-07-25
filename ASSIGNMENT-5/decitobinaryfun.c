#include <stdio.h>
#include <math.h>

long long convert(int);
int main()
{
int n;
long long bin;
printf("enter a decimal number:");
scanf("%d",&n);
bin=convert(n);
printf("%d in decimal =%lld in binary",n,bin);
}
long long convert(int n)
{
long long bin=0;
int rem,i=1;
while(n!=0)
{
rem=n%2;
n/=2;
bin+=rem*i;
i*=10;
}
}


/*enter a decimal number:4.56
4 in decimal =1000 in binary*\
