#include<stdio.h>
void main() {
int arr[100],size;
int *ptr,sum=0;
printf("enter the size of array:");
scanf("%d",&size);
printf("enter array elements:");
for(int i=0;i<size;i++) {
scanf("%d",&arr[i]);
}
ptr=arr;
for(int i=0;i<size;i++) {
sum=sum+*ptr;
ptr++;
}
printf("the sum of array elements is :%d",sum);

}

/*enter the size of array:5
enter array elements:23
45
78
12
56
the sum of array elements is :214*\
