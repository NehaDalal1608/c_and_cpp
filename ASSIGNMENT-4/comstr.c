#include<stdio.h>
#include<string.h>
void main()
{
char s1[100],s2[100];
int i=0,flag=0;

printf("\nEnter first string:");
scanf("%s",s1);

printf("\nEnter second string:");
scanf("%s",s2);

 while (s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] != s2[i]) {
            flag = 1;
            break;
        }
        i++;
    }

    if (flag == 0 && s1[i] == '\0' && s2[i] == '\0')
        printf("The strings are identical\n\n");
    else
        printf("The strings are not identical\n\n");

}

  /* OUTPUT:
ubuntu@ubuntu-OptiPlex-3020:~$ gcc cmp_str.c
ubuntu@ubuntu-OptiPlex-3020:~$ ./a.out

Enter first string:strings

Enter second string:string
The strings are not identical

ubuntu@ubuntu-OptiPlex-3020:~$ ./a.out

Enter first string:identical

Enter second string:identical
The strings are identical


*/

