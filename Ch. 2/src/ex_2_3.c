/*
 ============================================================================
 Name        : ex_2_3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// Write the function htoi(s) which converts a string of hexadecimal digits to its equivalent integer value
int htoi(char* s){
    int value = 0;
    int multiplier = 1;
    for (int i = strlen(s) - 1; i >= 0; i--){
        char c = s[i];
        if ((c >= '0') && (c <= '9')) {
            value += (c - '0') * multiplier;
        }
        else if ((c >= 'a') && (c <= 'f')){
            value += ((c - 'a') + 10) * multiplier;
        }
        else if ((c >= 'A') && (c <= 'A')){
            value += ((c - 'A') + 10) * multiplier;
        }
        else if ((c == 'x') || (c == 'X')) {
            break;
        }
        else {
            printf("Error!\n");
            break;
        }
        multiplier *= 16;
    }
    return value;
}

int main(void) {
	printf("%d\n", htoi("0x10f"));
}

