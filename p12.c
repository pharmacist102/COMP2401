#include <stdio.h>
#include <string.h>

#define MAX_STR 32

int main()
{
  struct PersonType {
    char first[MAX_STR];
    char last[MAX_STR];
    int age;
  };

  struct PersonType gertrude;

  strcpy(gertrude.first, "Gertrude");
  strcpy(gertrude.last, "Kardashian");
  gertrude.age = 99;

  printf("%s %s %d\n", gertrude.first, gertrude.last, gertrude.age);
  return(0);
}
