#include<stdio.h>
#include<math.h>
int main()
{
    int n,first_dgt, last_dgt,digits, swap_Num;
printf("Enter your required number = ");
scanf("%d", &n);

last_dgt = n % 10;

digits = (int)log10(n);
first_dgt = (int) (n / pow(10, digits));
swap_Num = last_dgt;
swap_Num *= (int) round(pow(10, digits));
swap_Num += n % ((int)round(pow(10, digits)));
swap_Num -= last_dgt;
swap_Num += first_dgt;
printf("Number after swapping the first and last digit will be: %d", swap_Num);
    return 0;
}