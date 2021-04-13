#include <math.h>

int isNumber(char s[]);
int string_binary_to_decimal(char* s);
int isBinary(char s[]);

int isNumber(char s[]) {
    int i = 0;
    while (s[i]) {
        if (!isdigit(s[i])) return 0;
        i++;
    }
    return 1;
}

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

int isBinary(char s[]){
    for(int i=0;i<strlen(s);i++){
        if((s[i] != '0')&&(s[i] != '1')) return 0;
    }
    return 1;
}