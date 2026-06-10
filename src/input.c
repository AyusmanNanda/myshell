#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "input.h"

#define MAX_LENGTH 500

int check_EOL(char buffer[]){
		for(int i = 0; buffer[i] != '\0'; i++){
				if(buffer[i] == '\n'){
						return 1;
				}
		}
		return 0;
		

}


int input(int argc, char* argv[]) {
		printf("\nWelcome to myshell! :)");
		printf("\nPress ctrl + d to exit.");
		for(int i = 1; i < argc; i++) {
				printf("%s", argv[i]);
		}
		char buffer[MAX_LENGTH];
		char* status;
start:
		printf("\nmyshell>");
		status = fgets(buffer, sizeof(buffer), stdin);
		if(status != NULL){
			if(!check_EOL(buffer)){
				printf("\nError: command is too long !\nTry again !");
				memset(buffer, '\0', sizeof(buffer));
				scanf("%*[^\n]"); scanf("%*c");
				goto start;
			}
			else{
				printf("%s", buffer);
				goto start;
			}
		}
		else{
				printf("\nBye :)");
				exit(0);
		}

		return 0;

}
