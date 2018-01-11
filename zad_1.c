#include <stdio.h>

const int GRANICA=1000000;

void fibo()
{
  int x=1; int y=1;
  while(y<GRANICA)
  {
    printf(" %d ",y);
    int bufor=y;
    y=y+x;
    x=bufor;
  }
}

int main()
{
  printf("\n%d ",1);
  fibo();
  printf("\n");
  return 0;
}
