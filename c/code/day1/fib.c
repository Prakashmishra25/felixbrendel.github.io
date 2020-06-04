#include <stdio.h>

int main(int argc, char* arg[]) {
    int n;

    printf("Enter a whole number: ");
    scanf("%d", &n);

    int a = 1;
    int b = 1;
    int counter = 0;
    while (counter < n-1) {
        int temp = a;
        a = b;
        b = b + temp;
        counter = counter + 1;
    }

    printf("fib(%d) = %d\n", n, b);

    return 0;
}
