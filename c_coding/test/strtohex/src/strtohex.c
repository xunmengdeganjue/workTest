/** 
 *  Copyright 2012 -- Andrew Davies
 *
 *  strtohex -- converts hex to ASCII.
 *
 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
  int i;
  char *c;
  if (argc < 2) {
    printf("usage: %s [string[]]\n", argv[0]);
    return EXIT_FAILURE;
  }

  for (i = 1; i < argc; ++i) {
    for (c = argv[i]; *c != '\0'; ++c) {
      printf("%x", *c);
    }
    if (i != argc - 1)
      printf(" ");
  }
  printf("\n");
  return EXIT_SUCCESS;
}
