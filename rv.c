#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){
fprintf(stderr, "\nReturn value: %d\n", system(argv[1]));
return EXIT_SUCCESS;
}
