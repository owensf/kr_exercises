#include <stdio.h>
#define MAXLINE 100 // char limit to characters
/*
	
Write a program to "fold" long input lines into two or more shorter lines after the last non-blank character that occurs before the n -th column of input. 
Make sure your program does something intelligent with very long lines, and if there are no blanks or tabs before the specified column.
*/

void copy(char to[], char from[]);

int main(int argc, const char* argv[]){
    int char_count = 0;
    char c;
    int last_whitespace_pos = -1;
    char line[MAXLINE];
    while ((c=getchar()) != EOF){
        ++char_count;
        if (char_count < MAXLINE){
            line[char_count] = c;
            if (c = '\t' || c == ' '){
                last_whitespace_pos = char_count;
            }           
        }
        else{
            // find last whitespace
            if (last_whitespace_pos < MAXLINE && last_whitespace_pos != -1){
                int i = 0;
                while(i < last_whitespace_pos){
                    ++i;
                    putchar(line[i]);
                }
                
                putchar('\n');
                char_count = 0;
                last_whitespace_pos = -1;
            }
                
            // no whitespace found
            else{
                int i = 0;
                // just print the line
                while(i < last_whitespace_pos){
                    ++i;
                    putchar(line[i]);
                }
                char_count = 0;
                last_whitespace_pos = -1;
                
            }
            
        }   
    }
    return 0;
}

void copy (char to[], char from[]){
    int i;
    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}