#include <stdio.h>

int sum(int a, int b);
int subtract(int a, int b);


int (*p[2]) (int x, int y);

int main(void)
{
  int result;
  int i, j, opt;

  p[0] = sum; /* address of sum() */
  p[1] = subtract; /* address of subtract() */

  i=10;j=20;//test numbers
  printf("Two numbers are: %d %d\n",i,j);

  printf("0:TO Add, 1:To Subtract\n");

  scanf("%d",&opt);

if(opt<0 || opt>1){printf("Invalid Input");goto L1;}
  result = (*p[opt]) (i, j);
  printf("%d", result);

L1:
  return 0;
}

int sum(int a, int b)
{
  return a + b;
}

int subtract(int a, int b)
{
  return a - b;
}
