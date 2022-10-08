#include "stdio.h"

void main(void) {

    char* name;

    printf("Hello, What is your name? > ");
    scanf("%s", name);

    printf("Hello, %s \n", name);
}