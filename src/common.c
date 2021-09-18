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

char *strrev(char *str)
{
    if (!str || ! *str)
        return str;

    int i = strlen(str) - 1, j = 0;
    char *temp= (char*) malloc(sizeof(str));
    char ch;
    while (i != 0)
    {
         //str[i] = str[j];
        ch = str[i];
        *temp++ = ch;
        //str[j] = ch;
        i--;
        j++;
    }
    return &temp;
}


#define start main
int start()
{
    printf(strrev("abcv"));
    return 0;
}