#include<stdio.h>
void main()
{
int num=1;
for(int i=1; i<=3;i++)
{
for(int j=1; j<=i;j++)
{
if(j==1)
{
printf("%d",num);
}
else{
printf("   %d",num);
}
num++;
}
printf("\n");
}

/*
1
2   3
4   5   6
/*
