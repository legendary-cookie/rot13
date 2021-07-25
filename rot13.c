#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv) {
  const char *small = "abcdefghijklmnopqrstuvwxyz";
  const char *big = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  const char *rot_small = "nopqrstuvwxyzabcdefghijklm";
  const char *rot_big = "NOPQRSTUVWXYZABCDEFGHIJKLM";
  char *word;
  if (argc == 1) {
    word = NULL;
  } else {
    for (int i = 1; i < argc; i++) {
      word = argv[i];
      if (word != NULL) {
        signed int ib  = strlen(word);
        for (int it = 0; it < ib; it++) {
          char ch = word[it];
          char *ptr = strchr(small, ch);
          char *ptr_big = strchr(big, ch);
          if (ptr) {
            int index = ptr - small;
            printf("%c", rot_small[index]);
          } else if (ptr_big) {
            if (ptr_big) {
              int index = ptr_big - big;
              printf("%c", rot_big[index]);
            }
          } else {
            printf("%c", ch);
          }
        }
      }
      printf(" ");
    }
    printf("\n");
  }
  if (word == NULL) {
    printf("Specify a word [a-z] or [A-Z]\n");
  }
  return 0;
}
