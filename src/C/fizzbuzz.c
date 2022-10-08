#include "stdio.h"


#define MAX 10000

short check_factor(int i, int j) {

    if (i % j == 0) {
        return 1;
    }
    else {
        return 0;
    }
}

void main(void) {

    int iMax = 0;

    do {
        printf("Enter a number > ");
        scanf(" %d", &iMax);
    } while(iMax <= 0 && iMax >= MAX);

    for(int i = 1; i <= iMax; i++) {

        if (check_factor(i,3) && check_factor(i,5)){
            printf("FizzBuzz\n");
        }
        else if (check_factor(i,3)) {
            printf("Fizz\n");
        }
        else if (check_factor(i,5)) {
            printf("Buzz\n");
        }
        else {
            printf("%d\n", i);
        }
    }
}