#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int isNumber(char s[]);
int isBinary(char s[]);
int string_binary_to_decimal(char* s);
int print_decimal_in_binary(int n);
double logbase(double y, int b);

int isNumber(char s[]) {
    int i = 0;
    while (s[i]) {
        if (!isdigit(s[i])) return 0;
        i++;
    }
    return 1;
}

int isBinary(char s[]){
    for(int i=0;i<strlen(s);i++){
        if((s[i] != '0')&&(s[i] != '1')) return 0;
    }
    return 1;
}

/*!
*   @brief Se lee el string "s", que contiene un número binario y se lo convierte a su equivalente decimal
*/
int string_binary_to_decimal(char* s){
    long n = atoi(s);
    int dec = 0, i = 0, rem;
    while (n != 0) {
        rem = n % 10;
        n /= 10;
        dec += rem * pow(2, i);
        ++i;
    }
    return dec;
}

/*!
*   @brief Se imprime el numero decimal "n" en forma de numero binario
*/
int print_decimal_in_binary(int n){
    
    /*
    double logar = logbase(n, (double)2);
    if(1 % logar) logar+=1;    
    printf("n=%d",n);
    printf("log2 n=%d",(int)logbase(n, (double)2));
    char buffer[n];
    for(int i; n > 0; i++){
        if(n & 1)
            buffer[n-i]='1';
        else
            buffer[n-i]='0';
        n >>= 1; //n = n >> 1 Es una operacion shift right, o sea dividir por 2
    }  

    char buffer[33];
    itoa(n,buffer,2);
    printf("Binary: %s\n",buffer); */

    
    while (n) {
        if (n & 1)
            printf("1");
        else
            printf("0");
        n >>= 1; //n = n >> 1 Es una operacion shift right, o sea dividir por 2
    }

    printf(" ==> ");//, buffer);
}

/*!
*   @brief Retorna logaritmo en base b de y
*/
double logbase(double y, int b)
{
    double lg;
    lg = log10(y)/log10(b);
    return(lg);
}

