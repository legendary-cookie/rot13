#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv) {
	const char* small = "abcdefghijklmnopqrstuvwxyz";
	const char* big = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	const char* rot_small = "nopqrstuvwxyzabcdefghijklm";
	const char* rot_big = "NOPQRSTUVWXYZABCDEFGHIJKLM";
	const char* word = argv[1];
	if (word != NULL) {
		for (int i = 0; i < strlen(word); i++) {	
			char ch = word[i];
			char *ptr = strchr(small, ch);
			char * ptr_big = strchr(big, ch);
			if (ptr) {
				int index = ptr-small;
				printf("%c", rot_small[index]);
			} else if (ptr_big) {
				if (ptr_big) {
					int index = ptr_big-big;
					printf("%c", rot_big[index]);
				}
			} else {
				printf("%c", ch);
			}
		}
		printf("\n");
	} else {
		printf("Specify a word [a-z] or [A-Z]\n");
	}
	return 0;
}
