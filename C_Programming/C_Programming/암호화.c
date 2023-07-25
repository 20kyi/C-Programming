#include <stdio.h>
#include <string.h>

#define SECRETKEY "!@#$%^&*()_+=-"

int main() {
	int i;
	char string[] = "1234567890";

	puts(string);

	for (i = 0; i < strlen(string); i++) {
		string[i] ^= SECRETKEY[i];
	}

	puts(string);

	for (i = 0; i < strlen(string); i++) {
		string[i] ^= SECRETKEY[i];
	}

	puts(string);

	return 0;
}
