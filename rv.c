#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char *argv[]){

int i;					/*For for cycles*/
int q = 0;				/*for swapping between the two "strings"*/
int sizeofstring = 0;

for(i = 1; i < argc; i++){
	  sizeofstring += strlen(argv[i]) + 1;
	  }
char *string = malloc(sizeofstring);
char *string2 = malloc(sizeofstring);

for( i=1; i < argc; i++){
	 if(q == 0){
	 	sprintf(string2, "%s %s", string, argv[i]);
	 	q = 1;
		}
     if(q == 1){
	 	  sprintf(string, "%s %s", string2, argv[i]);
		  q = 0; 
	   	  }
	 }
fprintf(stderr, "\nReturn value: %d\n", system(string));
return EXIT_SUCCESS;
}
