#include<stdio.h>

int  gcd(int n1, int n2) {
    if (n2 != 0)
        return gcd(n2, n1 % n2);
    else
        return n1;
}

int main() 
{
    int a, b;
    printf("Enter your required any two positive numbers: ");
    scanf("%d %d", &a, &b);
    printf("GCD of %d and %d is %d.", a, b, gcd(a, b));
    return 0;
}
