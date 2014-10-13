#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char *argv[]){

int i;					/*For for cycles*/
int sizeofstring = 0;

for(i = 1; i < argc; i++){
	sizeofstring += strlen(argv[i]) + 1;
	}
char *string = malloc(sizeofstring);

for( i=1; i < argc; i++){		/*We don't want to include the name of the command*/
	strcat(string, argv[i]);
	strcat(string, " ");
	}
fprintf(stderr, "\nReturn value: %d\n", system(string));
return EXIT_SUCCESS;
}
