#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void dec_add(int a,int b) __attribute__((cdecl));

int main( int argc, char *argv[] )  {

if( argc == 5 ) {
    printf("The %d arguments supplied are %s %s %s %s \n",argc-1, argv[1], argv[2],argv[3],argv[4]);
}
else {
    printf("Invalid operands, cast should be: \"./calc <dec/bin> <Operand1> <Operator> <Operand2>\"\n");
    exit(EXIT_FAILURE);
}
   
/*for (int i = 0; i <= argc; i++) {
    printf("%d at %p: %s\n", i, argv[i], argv[i]);
}*/

if (!(strcmp(argv[1], "dec"))){
    printf("Decimal calculator\n");
}
if (!(strcmp(argv[1], "bin"))){
    printf("Binary calculator\n");
}
if ((char)argv[3][0]=='+'){
    //printf("Sum\n");
}

int a = atoi(argv[2]);
int b = atoi(argv[4]);
dec_add(a,b);
    
return 0;

}