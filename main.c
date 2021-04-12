#include <stdio.h>
#include <stdlib.h>

void dec_add(int a,int b) __attribute__((cdecl));

int main( int argc, char *argv[] )  {

if (argv[1]=="dec"){
    printf("Decimal calculator");
}
if ((char)argv[3][0]=='+'){
    //printf("Sum\n");
}

int a = atoi(argv[2]);
int b = atoi(argv[4]);
dec_add(a,b);
    
return 0;

}