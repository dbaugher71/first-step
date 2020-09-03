#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int main(void) {
  char *name = readline("Enter your name: ");
  printf("Hello, %s!\n",name);
}