// Multiplication table (Page 40)
#include <stdio.h>

int main(){

    printf("Multiplication Table\n");
    int mul_1 = 5;
    int mul_2 = 9;

    for (int i = 1; i <=12; i++){

        printf ("%d * %d = %d\n",mul_1, i,mul_1 * i );
    }
    printf ("\n");
    for (int j = 1; j <=12; j++){

        printf ("%d * %d = %d\n",mul_2, j,mul_2 * j );
    }
    printf("Hello");
    printf("World");
}