#include <stdio.h>

int main(){

    int num1, num2, menu;

    printf ("Enter Num1 : ");
    scanf ("%d", &num1);
    printf ("Enter Num1 : ");
    scanf ("%d", &num2);

    printf("Calculator Menu : \n1. +\n2. -\n3. *\n4. /\n5. %%\n");
    printf ("Choose menu : ");
    scanf ("%d", &menu);

    switch (menu)
    {
    case 1:
        printf ("Ans: Num1 + Num2 = %d\n", num1 + num2);
        break;
    case 2:
        printf ("Ans: Num1 - Num2 = %d\n", num1 - num2);
        break;
    case 3:
        printf ("Ans: Num1 * Num2 = %d\n", num1 * num2);
        break;
    case 4:
        printf ("Ans: Num1 / Num2 = %d\n", num1 / num2);
        break;
    case 5:
        printf ("Ans: Num1 %% Num2 = %d\n", num1 % num2);
        break;
        
    default: printf("Invalid Choice\n");
        break;
    }

    return 0;
}