#include<stdio.h>
void main()
{
int n,i,j;
printf("enter a number:");
scanf("%d",&n);
for(i=1;i<=10;i++)
{
j=n*i;
printf("%d * %d = %d \n",n,i,j);
}
}

/*enter a number:9
9 * 1 = 9 
9 * 2 = 18 
9 * 3 = 27 
9 * 4 = 36 
9 * 5 = 45 
9 * 6 = 54 
9 * 7 = 63 
9 * 8 = 72 
9 * 9 = 81 
9 * 10 = 90 */

