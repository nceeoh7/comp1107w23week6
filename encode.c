#include <stdbool.h>
#include "helpers.h"

void caesar_shift(string encode_str, bool is_left_shifted, int shift){

    int strLength = strlen(encode_str);

    char shiftedStr[strLength+1];

    for(int i = 0; i< strLength; i++){
        if(!is_left_shifted){
            shiftedStr[i] = encode_str[i] + shift;
        }else{
            shiftedStr[i] = encode_str[i] - shift;
        }

    }

    shiftedStr[strLength] = '\0';

    printf("The resulting caesar encoded string is %s\n", shiftedStr);

    return;
}