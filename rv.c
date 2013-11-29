#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){

char string[1000] = {"\0"}; //This needs to be changed as soon as I have my book back :)
int i;

for( i=1; i < argc; i++){
	sprintf(string, "%s %s", string, argv[i]);
	}
//printf("%s\n", string);    //That was just debug, it should be deleted
fprintf(stderr, "\nReturn value: %d\n", system(string));
return EXIT_SUCCESS;
}
