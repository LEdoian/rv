#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){

char string[];
int i;

for( i=1; i < argc; i++){
	sprintf(string, "%s %s", string, argv[i]);
	}
fprintf(stderr, "\nReturn value: %d\n", system(string);
return EXIT_SUCCESS;
}
