#include<stdio.h>
int main()
{
   int n;
   int i=1;
   int s=1;
   printf("enter the value of n");
   scanf("%d",&n);
   if(i<=n){
       s=s*i;
       i=i+1;
   }
   else{
       printf("sorry cant processs");
  }
  printf("factorial of n natural number%d\n",s);
  return 0;
}