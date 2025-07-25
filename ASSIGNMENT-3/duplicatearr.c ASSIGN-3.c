#include<stdio.h>
void main()
{
int arr[100];
int n,mm=1,ctr=0;
int i,j;
printf("input the number of elements:");
scanf("%d",&n);
printf("input %d elements in the array:\n",n);
for(i=0;i<n;i++)
{
printf("elements-%d:",i);
scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(arr[i]==arr[j])
{
ctr++;
break;
}
}
}
printf("total number of duplicate elements in the array:%d\n",ctr);
}



/*input the number of elements:5
input 5 elements in the array:
elements-0:1
elements-1:1
elements-2:2
elements-3:2
elements-4:3
total number of duplicate elements in the array:2*\






