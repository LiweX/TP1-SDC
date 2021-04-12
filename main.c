#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void dec_add(int a,int b) __attribute__((cdecl));
void dec_sub(int a,int b) __attribute__((cdecl));
void bin_add(int a,int b) __attribute__((cdecl));
void bin_sub(int a,int b) __attribute__((cdecl));

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
if (!( ((char)argv[3][0]=='+') || ((char)argv[3][0]=='-') )){
    printf("Unknown Operator %s. Must be - or +\n", argv[3]);
    exit(EXIT_FAILURE);
}

if (!(strcmp(argv[1], "dec"))){
    printf("Decimal calculator\n");
    if(!isNumber(argv[2])){
        printf("Invalid operand %s. Must contains only numbers\n", argv[2]);
        exit(EXIT_FAILURE);
    }
    if(!isNumber(argv[2])){
        printf("Invalid operand %s. Must contains only numbers\n", argv[4]);
        exit(EXIT_FAILURE);
    }
    int a = atoi(argv[2]);
    int b = atoi(argv[4]);
    if ((char)argv[3][0]=='+') dec_add(a,b);
    if ((char)argv[3][0]=='-') dec_sub(a,b);
    //printf("Sum\n");
}else{
    printf("Unknown type %s. Must be dec or bin\n", argv[1]);
    exit(EXIT_FAILURE);
}
if (!(strcmp(argv[1], "bin"))){
    printf("Binary calculator\n");
}

    

// TODO: FREE EN CASO DE MALLOC
exit(EXIT_SUCCESS);
}

int isNumber(char cadena[]) {
    int i = 0;
    while (cadena[i]) {
        if (!isdigit(cadena[i]) return 0;
        i++;
    }
    return 1;
}