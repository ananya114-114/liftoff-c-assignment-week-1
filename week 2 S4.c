#include<stdio.h>
#include<string.h>
void main()
{

    int i, j;

  
  int p1 = 0, p2 = 1;

  
  int next_term = p1 + p2;


  printf("Enter the number of your terms: ");
  scanf("%d", &j);

  
  printf("The Fibonacci Series: %d, %d, ", p1, p2);

  
  for (i = 3; i <= j; ++i) {
    printf("%d, ", next_term);
    p1 = p2;
    p2 = next_term;
    next_term = p1 + p2;
  }
    
}