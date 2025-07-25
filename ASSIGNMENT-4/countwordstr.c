#include <stdio.h>
#include <string.h>
void main()
{

    char s[200];
    int count = 0, i;

    printf("Enter the string:\n");
    scanf("%[^\n]s", s);

    for (i = 0;s[i] != '\0';i++)
    {
      if (s[i] == ' ' && s[i+1] != ' ')
      count++;    
    }
    printf("Number of words in given string are: %d\n\n", count + 1);
}

/*
OUTPUT:
ubuntu@ubuntu-OptiPlex-3020:~$ gcc count_word.c
ubuntu@ubuntu-OptiPlex-3020:~$ ./a.out
Enter the string:
hello everyone
Number of words in given string are: 2

ubuntu@ubuntu-OptiPlex-3020:~$ ./a.out
Enter the string:
MY NAME IS
Number of words in given string are: 3

ubuntu@ubuntu-OptiPlex-3020:~$ ./a.out
Enter the string:
my name is =-;09
Number of words in given string are: 4

*/

