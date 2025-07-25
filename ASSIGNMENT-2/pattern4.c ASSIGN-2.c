#include<stdio.h>
void main()
{
int i,j,row=3,num=1;
for(i=1;i<=row;i++)
{
for(j=1;j<=i;++j)
{
printf("%d ",num);
num++;
}
printf("\n");
}
}



/*
output:
1 
2 3 
4 5 6 /*

