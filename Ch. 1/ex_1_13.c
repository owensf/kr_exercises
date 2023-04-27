#include <stdio.h>
#define IN 0
#define OUT 1
#define WORD_LENGTHS 256 // capping at 128 letter words
// write a program to print the histogram of the lengths of words in its input

int main(int argc, const char* argv[]){
    int c, nl, state;
    int nword[WORD_LENGTHS+1];

    for (int i = 0; i < WORD_LENGTHS; ++i){
        nword[i] = 0;
    }

    while ((c = getchar()) != EOF){
        if (c == ' ' || c == '\n' || c == '\t'){
            if (state == IN)
                ++nword[nl];
                nl = 0;
            state = OUT;
            
            ++nword[nl];
        }
        else {
            if (state == OUT){
                state = IN;
            }
            ++nl;
        }
    }
    // print histogram
    for (int i = 0; i < WORD_LENGTHS; ++i){
        printf("%d: %d\n", i, nword[i]);
    }
    return 0;
}