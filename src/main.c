#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_LENGTH 100

int main(int argc, char** argv[]) {
		for(int i = 1; i < argc; i++) {
				printf("%s", argv[i]);
		}
		printf("\n");

		char buffer[MAX_LENGTH];
		printf("\nmyshell>");
		scanf("%s", &buffer);
		printf("%s", buffer);
		printf("\nmyshell>");

		return 0;

}
