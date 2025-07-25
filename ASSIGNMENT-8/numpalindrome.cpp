#include<iostream>
using namespace std;
int main()
{
int n,num,digit,rev=0;
cout<<"enter a positive num:";
cin>>num;
n=num;
do
{
digit=num%10;
rev=(rev*10)+digit;
num=num/10;
}
while(num!=0);
cout<<"the reverse of the number is:"<<rev<<endl;
if(n==rev)
cout<<"the number is a palindrome.";
else
cout<<"the number is not a palindrome:";
return 0;
}


/*enter a positive num:12321
the reverse of the number is:12321
the number is a palindrome. ubuntu@ubuntu-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~$ ./numpalindrome
enter a positive num:12345
the reverse of the number is:54321
the number is not a palindrome*\
