#include <stdio.h>

int main(int argc, char* arg[]) {
    int array_length = 40;
    float array[array_length];

    int array_counter = 0;
    while (array_counter < array_length) {
        array[array_counter] = 1;

        int fac_counter = 1;
        while (fac_counter<=array_counter) {
            array[array_counter] = array[array_counter] * fac_counter;
            fac_counter = fac_counter + 1;
        }

        array_counter = array_counter + 1;
    }

    array_counter = 0;
    while (array_counter < array_length) {
        printf("fac(%d) = %f\n", array_counter, array[array_counter]);
        array_counter = array_counter + 1;
    }

    return 0;
}
