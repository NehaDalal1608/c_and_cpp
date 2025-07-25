#include <stdio.h>
#include <string.h>
void main() 
{
char str[100];
int n,i;
printf("Enter a string: ");
{
scanf("%s",str);
}
int length = strlen(str);
printf("Characters in reverse order: ");
for (int i = length - 1; i >= 0; i--) 
{
printf("%c", str[i]);
}
printf("\n");
}

/*Output:
Enter a string: dypcse
Characters in reverse order: escpyd
*/
