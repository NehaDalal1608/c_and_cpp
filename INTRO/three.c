#include<stdio.h>
void main()
{
int num1=4,num2=5,num3=8;

printf("%d ,is greater",(num1>num2)?((num1>num3)?num1:num3):((num2>num3)?num2:num3));
}
