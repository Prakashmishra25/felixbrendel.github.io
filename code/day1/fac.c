#include <stdio.h>

int main(int argc, char* arg[]) {
    int n;

    printf("Enter a whole number");
    scanf("%d", &n);

    int result = 1;
    int i = 1;

    while (i<=n) {
        result = result * i;

        i = i + 1;
    }

    printf("The result is: %d", result);

    return 0;
}
