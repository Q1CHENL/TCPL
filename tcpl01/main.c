
#include <stdio.h>//standard input/output libaray

#define LOWER 0
#define UPPER 300
#define STEP 20

/*print farenheit celsius table
  for fahr = 0, 20, ..., 300*/

// \t for tab, \n for new line
//%o for octal %x for hexadecimal, %c for character, %s for character string, %% for itself
//getChar(), putChar()

int main() {
    //printf("%s\n", "Tempareture Table");

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

    /*int fahr;
    for (fahr = UPPER; fahr >= LOWER; fahr -= STEP) {
        printf("%3d %6.1f \n", fahr, (5.0 / 9.0) * (fahr - 32));
    }

    printf("%d", EOF);*/

    /*int c;
    while(c = (getchar() != EOF)){
        putchar(c);
    }*/

/*    long nc;
    while (getchar() != EOF){
        ++nc;
}
     printf("he");
     printf("%ld\n", nc);*/


   /* int c;
    while((c=getchar())!=EOF)
    {
        putchar(c);
    }*/


    double nc;
    for (nc = 0; getchar() != EOF; ++nc){
        printf("%.0f", nc);
    }
    printf("%.0f", nc);
    printf("hello");


 /*   char c;
    printf ("\n Enter a character \n");
    c = getchar(); // get a single character
    printf(" You have passed ");
    putchar(c); // print a single character using putchar
    */
    return 0;



}
