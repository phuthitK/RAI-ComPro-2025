// The exercise from page 33

#include <stdio.h>

int main(){

    int sum = 0;
    int num;

    do {
    printf("Enter a number: ");
    scanf ("%d",&num);
    sum += num;
}while (num != 0);

    printf ("Result: %d\n", sum);
    return 0;
}