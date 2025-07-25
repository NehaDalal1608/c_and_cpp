#include<stdio.h>
void main()
{
int a[100];
int n,mm=1,ctr=0;
int i,j;
printf("enter the number of element");
scanf("%d",&n);
printf("enter element in the array");
for(i=0;i<n;i++)
{
printf("element-%d:",i);
scanf("%d",&a[i]);
}
for(i=0;i<n;i++){
for(j=i+1;j<n;j++){
if(a[i]==a[j]);
{
ctr++;
break;
}
}
}
printf("total numberof duplicate element found in array:%d\n",ctr);
}





/*
output:
enter the number of element5
enter element in the arrayelement-0:1
element-1:1
element-2:2
element-3:3
element-4:3
total numberof duplicate element found in array:2

