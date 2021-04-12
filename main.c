#include <stdio.h>
#include<stdlib.h>

int main( int argc, char *argv[] )  {

if (argv[1]=="dec"){
    printf("Decimal calculator");
}
if ((char)argv[3][0]=='+'){
    printf("Sum");
}

int z =0;
int y = atoi(argv[2]);
int x = atoi(argv[4]);
z = x + y;
printf("%d",z);
    
return 0;

}