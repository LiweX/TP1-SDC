#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

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
    char* buffer = malloc(32 * sizeof(char));
    int result = n;    
    while (n) {
        if (n & 1)
            strcat(buffer, "1");
        else
            strcat(buffer, "0");
        n >>= 1; //n = n >> 1 Es una operacion shift right, o sea dividir por 2
    }
    //printf("%s ----- ", buffer);    
    for(int i=strlen(buffer); i>0;i--){
        printf("%c", buffer[i-1]);
    }

    printf(" ==> %d\n", result);
    free(buffer);
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

