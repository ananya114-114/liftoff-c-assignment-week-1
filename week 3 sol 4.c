#include <stdio.h>

void swap(int *p, int *q)
{
    int z;

    z = *p;
    *p = *q;
    *q = z;
    
  }

int main()
{
    int a, b;
    printf("enter a and b:\n");
    scanf("%d %d", &a, &b);
    printf("your swapped number will be:\n");
     swap(&a, &b);
printf("your number after swapping: %d %d" , a, b);

    return 0;
}