#include<stdio.h>

int main()
{
   int a;
   printf("Enter the Number: ");
   scanf("%d",&a);
   int n=a%2;
   switch(n)
{
   case (0):
  printf("%d is a Even Number",a);
  break;
  default:
   printf("%d is a odd number",a);
   break;
}
 return 0;
}