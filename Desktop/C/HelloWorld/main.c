#include <stdio.h>//standard input/output libaray

/*print farenheit celsius table
 * for fahr = 0, 20, ..., 300*/

//   \t for tab, \n for new line

/*%o for octal %x for hexadecimal, %c for character, %s for character string, %% for itself*/

int main() {
    printf("%s\n", "Tempareture Table");

/* first version:   float fahr, celsius;
    float lower, upper, step;

    lower = 0;*//*lower limit of temperature table*//*
    upper = 300; *//*upper limit*//*
    step = 20;*//*step size*//*
    fahr = lower;

    while (fahr <= upper) {
        celsius = 5 * (fahr - 32) / 9;
        printf("%3.0f\t %6.1f\n", fahr, celsius);
        fahr += step;
    }*/

    int fahr;
    for (fahr = 300; fahr >= 0; fahr -= 20) {
        printf("%3d %6.1f \n", fahr, (5.0 / 9.0) * (fahr - 32));
    }

    return 0;
}