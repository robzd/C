#include <stdio.h>

int main() {
    char frase[100];
    scanf("%[^\n]", frase);
    printf("%s", frase);
    
    return 0;
}

// g++ -Wall -o abcde test.c
// ./abcde
