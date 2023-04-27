#include <stdio.h>

// write a program to copy its input to its output, replacing each string of one or more blanks with a single blanks

int main(int argc, const char* argv[]){

    int c;
    int prev_null = 0;
    while ((c = getchar()) != EOF){
        if (c == ' '){
            prev_null = 1;
        }
        else{
            if (prev_null == 1){
                putchar(' ');
                prev_null = 0;
            }
            putchar(c);
        }
    }
    return 0;
}