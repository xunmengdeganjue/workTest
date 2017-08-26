/** 
 *  Copyright 2012 -- Andrew Davies
 *
 *  hextostr -- converts hex to string (if possible).
 *
 *  Reads two bytes of data at a time for each string, and then for each byte,
 *  as long as it is valid hex (0-f), then the hex code will be cast to an ASCII
 *  character.  Sadly no unicode, but there would likely be an easy option to
 *  implement it somehow.
 */
#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>

static bool mask_char(char *c, char hb, uint8_t shift) {
    uint8_t mask;
    switch ((int)hb) {
      case (int)'0':
        mask = 0;
        break;
      case (int)'1':
        mask = 1;
        break;
      case (int)'2':
        mask = 2;
        break;
      case (int)'3':
        mask = 3;
        break;
      case (int)'4':
        mask = 4;
        break;
      case (int)'5':
        mask = 5;
        break;
      case (int)'6': 
        mask = 6;
        break;
      case (int)'7': 
        mask = 7;
        break;
      case (int)'8': 
        mask = 8;
        break;
      case (int)'9': 
        mask = 9;
        break;
      case (int)'a': 
      case (int)'A': 
        mask = 10;
        break;
      case (int)'b': 
      case (int)'B': 
        mask = 11;
        break;
      case (int)'c': 
      case (int)'C': 
        mask = 12;
        break;
      case (int)'d': 
      case (int)'D': 
        mask = 13;
        break;
      case (int)'e': 
      case (int)'E': 
        mask = 14;
        break;
      case (int)'f': 
      case (int)'F': 
        mask = 15;
        break;
      default:
        return false;
        break;
    }

    *c |= (char)(mask << shift);
    return true;
}

int main(int argc, char **argv) {
  int i;
  char *c, hb1 = '\0', hb2 = '\0';
  char char_out;
  bool res;
  if (argc < 2) {
    printf("usage: %s [hex[]]\n", argv[0]);
    return EXIT_FAILURE;
  }

  for (i = 1; i < argc; ++i) {
    for (c = argv[i]; *c != '\0'; ++c) {
      // If first half byte has been set, then set the second, else set the first and
      // clear the second.  This is for uneven amounts of hex.  In the event of
      // uneven half bytes, the second 4 bits will be zero (todo: perhaps just whine if
      // there's uneven amounts of hex).
      if (hb1 != 0) {
        hb2 = *c;
        hb1 = '\0';
        res = mask_char(&char_out, hb2, 0);
        if (res) {
          printf("%c", char_out);
        }
      } else {
        char_out = '\0';
        hb1 = *c;
        hb2 = '\0';
        res = mask_char(&char_out, hb1, 4);
      }

      if (!res) {
        fprintf(stderr, "\nInvalid characters: %c%c\n", hb1, hb2);
        exit(1);
      }
    }
    if (i != argc - 1)
      printf(" ");
  }
  printf("\n");
  return EXIT_SUCCESS;
}
