#include <stdio.h>

int main (){

    int num1, num2, num3;

    printf ("Enter integer #1: ");
    scanf ("%d", &num1);
    printf ("Enter integer #2: ");
    scanf ("%d", &num2);
    printf ("Enter integer #3: ");
    scanf ("%d", &num3);

    int temp;
    int sum = num1 + num2 + num3;
    float average = sum / 3.0;

    if (num1 > num2){
        temp = num1; num1 = num2; num2 = temp;
    }
    else {
        if(num2 > num3){
        temp = num2; num2 = num3; num3 = temp;
        }
    }
    if (num1 > num2){
        temp = num1; num1 = num2; num2 = temp;
    }
    else {
        if(num2 > num3){
        temp = num2; num2 = num3; num3 = temp;
        }
    }

    printf ("Results: \n"); printf ("Minimum: %d\n", num1);
    printf ("Maximum: %d\n", num3);
    printf ("Sum: %d\n", sum);
    printf ("Average: %.2f\n",average);

    return 0;
    

}