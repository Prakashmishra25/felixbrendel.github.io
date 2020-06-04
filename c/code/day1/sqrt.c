#include <stdio.h>

int main(int argc, char* arg[]) {
    float precision = 0.000001;
    float s;

    printf("Enter any number: ");
    scanf("%f", &s);

    float x_n = 1;
    float x_np1;
    float difference = 1;

    while (difference > precision) {
        x_np1 = (x_n+(s/x_n))*0.5;

        difference = x_np1 - x_n;

        if (difference < 0) {
            difference = -difference;
        }

        x_n = x_np1;
    }

    printf("The square root of %f is %f\n", s, x_np1);

    return 0;
}
