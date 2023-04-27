#include <stdio.h>

int main(){
    // test what happens in this line
    int a, b, c;
    a = 0;
    b = 1;
    c = 1;
    //printf("%d\n", (a = b) != c);
    //printf("%d\n", (b = a) != c);
    printf("%d\n", b = a != c);

    printf("%d\n", a = b != c);


    return 0;
}