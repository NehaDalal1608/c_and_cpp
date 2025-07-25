#include<stdio.h>
#pragma pack(1)
struct employee {
char name[10];
int employeeid;
char department[10];
float salary;
};
int main ()
{
struct employee employee1;
int size = sizeof(employee1);
printf("size of struct employee:%d bytes\n",size);
return 0;
}


/*size of struct employee:28 bytes*\

