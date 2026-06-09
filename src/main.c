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
		char* status;
start:
		printf("\nmyshell>");
		status = fgets(buffer, sizeof(buffer), stdin);
		if(status != NULL){
				printf("%s", buffer);
				goto start;
		}
		else{
				printf("Bye :)");
				exit(1);
		}

		return 0;

}
