#include <stdio.h>
#include<stdbool.h>
  primenum(int num)
  {
   if(num<=1){
    return false;
   }
   for (int i=2;i*i<=num;i++)
   {
   if(num % i == 0){
   return false;
   }
  }
  return true;
 }
 void CheckPrimenum(int start,int end)
 {
      printf("Prime numbers between %d and %d are:",start,end);
      for(int i=start; i<=end;i++)
  {
  if(primenum(i)) {
   printf("%d ", i);
  }
  }
  }
  int main()
  {
  int start,end;
  printf("Enter the starting interval:");
  scanf("%d",&start);
  printf("Enter the ending interval: ");
  scanf("%d",&end);
  
  CheckPrimenum(start,end);
  return 0;
}


/*Enter the starting interval:2
Enter the ending interval: 10
Prime numbers between 2 and 10 are:2 3 5 7*\
