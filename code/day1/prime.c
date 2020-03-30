#include <stdio.h>

int main(int argc, char* arg[]) {
    int test;

    printf("Enter a whole number: ");
    scanf("%d", &test);

    int largest_divisor = 1;
    int counter = 2;
    while (counter < test) {
        if (test % counter == 0) {
            largest_divisor = counter;
        }
        counter = counter + 1;
    }

    if (largest_divisor == 1) {
        printf("The number %d is a prime number.", test);
    } else {
        printf("The number %d is not a prime number (divisible by %d).", test, largest_divisor);
    }

    return 0;
}
