#include <stdio.h>
#include <string.h>

#define MAX_STR_SIZE = 32;

int main()
{
  int n=0;

  char inStr1[32];
  char inStr2[32];
  char newStr[32];
  char bigStr[32];

  printf("Please enter two strings: ");
  scanf("%s %s", inStr1, inStr2);

  printf("You said: %s %s\n", inStr1, inStr2);

  // newStr = inStr1
  strcpy(newStr, inStr1);
  newStr[0] = 'J';
  printf("I say: %s\n", newStr);

  printf("We both say: %s %s\n", strcat(inStr1, newStr), inStr2);

  sprintf(bigStr, "%s %s, y%d", inStr1, inStr2, n);
  printf("We both say again: %s\n", bigStr);
  return(0);

}
