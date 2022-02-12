#include<stdio.h>

int main()
{
   int a,b;
   printf("Enter the first Number: ");
   scanf("%d",&a);
   printf("Enter the second number");
   scanf("%d",&b);
   int n;
   printf("1:Sum\n2:subtraction\n3:multiplication\n4:division\nEnter: ");
   scanf("%d",&n);
   switch(n)
{
   case(1):
   printf("Sum is : %d\n",a+b);
   break;
   case(2):
   printf("substraction is : %d\n",a-b);
   break;
   case(3):
   printf("multiplication is : %d\n",a*b);
   break;
   case(4):
   printf("division is : %d\n",a/b);
   break;
}
 return 0;
}
