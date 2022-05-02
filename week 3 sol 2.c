#include<stdio.h>

int Prime(int i,int n)
{
    if(n==i)
        return 0;
    else
        if(n%i==0)
            return 1;
    else{
        return Prime(i+1,n);
    }
}
int main()
{
    int n ;
    printf("Enter the Number:");
    scanf("%d",&n );

    if(Prime(2,n)==0)
        printf("It's a Prime Number.");
    else
        printf("It's not a Prime Number.");
}