#include <stdio.h>
#define IN 0 // inside a word
#define OUT 1 // outside a word 

//write a program that prints its input one word per line

int main(int argc, const char* argv[]){
    int c, n1, nw, nc, state;
    state = OUT;
    while((c = getchar()) != EOF){
        if (c == '\n' || c == '\t' || c == ' ')
            state = OUT;
        else {
            if (state == OUT){
                state = IN;
                putchar('\n');
            }
            putchar(c);
        }   
    }
    return 0;
}