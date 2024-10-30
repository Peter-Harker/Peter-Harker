#include <stdio.h>
#include <stdlib.h>

int main()
{
  int x,y;
  x=015;
  y=0x15;
  printf("%4o%4x",x,y);
  printf("%4x%4d\n",x,y);
  printf("%4d%4o\n",x,y);
    return 0;
}
