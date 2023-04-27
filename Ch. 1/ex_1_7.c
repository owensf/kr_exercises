#include <stdio.h>
#define SWAG 1

int main(int argc, const char* argv[])
{
    long c;
    double d;
    int e;
    short f;
    printf("size of long: %d\n", sizeof(c));
    printf("size of double: %d\n", sizeof (d));
    printf("size of int: %d\n", sizeof(e));
    printf("size of short: %d\n", sizeof(f));
    printf("ascii of letter a: %d\n", 'A');
    printf("testing constant %d\n", SWAG);
    printf("this is what happens when I multiply two chars %c", 1 * 70);
}