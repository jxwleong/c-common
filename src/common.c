#include <malloc.h>
#include <stdio.h>
#include <stddef.h> // To get reference to NULL
#include <string.h>
#include "common.h"


/*
    Return the decimal in char
*/
char decimalToChar(int decimal){
    char temp = decimal + ASCII_DECIMAL_TO_CHAR_OFFSET;
    return temp;
}

/*
    Return the binary format of decimal in string
*/
char *getDecimalInBinaryStr(int decimal){
    int i;
    int modulo;
    char binaryStr[MAX_CHAR_ARRAY_SIZE];
    
    for (i=0; decimal > 0; i++){
        modulo = decimal %2;
        binaryStr[i] = decimalToChar(modulo);
        decimal = decimal / 2;
    }
    return strrev(binaryStr);
}

