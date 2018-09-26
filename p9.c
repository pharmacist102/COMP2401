#include <stdio.h>

int main()
{
  char myStr[10];
  int i=0;

  //myStr = "Hello";

  myStr[0] = 'H';
  myStr[1] = 'e';
  myStr[2] = 'l';
  myStr[3] = 'l';
  myStr[4] = 'o';
  myStr[5] = '\0';

  printf("%s\n", myStr);
}
