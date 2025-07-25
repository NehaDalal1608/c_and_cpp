#include<stdio.h>
void main()
{
int arr[100],size,i,j;
printf("enter numbers of elements in array \n");
scanf("%d",&size);
printf("enter %d numbers\n",size);
for(i=0;i<size;i++)
{
scanf("%d",&arr[i]);
}
printf("unique elements\n");
for(i=0;i<size;i++)
{
for(j=0;j<i;j++)
{
if(arr[i]==arr[j])
break;
}
if(i==j)
{
printf("%d",arr[i]);
}
}
}


/*enter numbers of elements in array 
5
enter 5 numbers
1
2
2
4
6
unique elements
1246*\





