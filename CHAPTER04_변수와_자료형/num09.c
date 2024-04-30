#include <stdio.h>
//9번
int main() {
    char a = 'a';

    char b = 'a' + 1;
    char c = 'b' + 1;
    char d = 'c' + 1;

    printf("%c %c %c \n", b,c,d);
    return 0;
}
/*
방법1
char b = 'a' + 1;
char c = 'b' + 1;
char d = 'c' + 1;

방법2
char b = 'a' + 1;
char c = 'a' + 2;
char d = 'a' + 3;



*/