#include <stdio.h>

int main (){

    int num_1;
    float num_2;
    char ch;

    printf ("Please enter an integer value: ");
    scanf ("%d", &num_1);
    printf ("You entered %d\n", num_1);
    printf ("Please enter a float value: ");
    scanf ("%f", &num_2);
    printf ("You entered %.1f\n", num_2);
    printf ("Please enter a character: ");
    scanf ("%s", &ch);
    printf ("You entered %c\n", ch);

    return 0;
}