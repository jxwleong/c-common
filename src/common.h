#ifndef COMMON_H
#define COMMON_H

// Get from ASCII table where decimal 48 = char '1'
#define ASCII_DECIMAL_TO_CHAR_OFFSET    48  
#define MAX_CHAR_ARRAY_SIZE     128


char decimalToChar(int decimal);
char *getDecimalInBinaryStr(int decimal);


#endif // COMMON_H
