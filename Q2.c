#include<stdio.h>

int main()
{
   int a,b;
   printf("Enter the first number: ");
   scanf("%d",&a);
   printf("Enter the second number: ");
   scanf("%d",&b);
   
   if (a>b)
{
   printf("%d is the greatest number",a);
}
else{
    printf("%d is the greatest number",b);
}
   return 0;
}