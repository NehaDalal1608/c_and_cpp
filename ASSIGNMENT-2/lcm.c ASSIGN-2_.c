#include <stdio.h>
int gcd(int a,int b)
{
while (b)
{
int temp = b;
b = a % b;
a = temp;
}
return a;
}
int lcm(int a,int b)
{
return(a*b)/gcd(a,b);
}
int main()
{
int num1,num2;

printf("Enter the first number: ");
scanf("%d",&num1);
printf("Enter the second number: ");
scanf("%d",&num2);
int result_gcd = gcd(num1, num2);
int result_lcm = lcm(num1, num2);
printf("GCD of %d and %d is %d\n", num1, num2, result_gcd);
printf("LCM of %d and %d is %d\n", num1, num2, result_lcm);
}

/*
Enter the first number: 45
Enter the second number: 54
GCD of 45 and 54 is 9
LCM of 45 and 54 is 270
/*
