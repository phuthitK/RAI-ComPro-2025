// Program for display edge of square
#include <stdio.h>
int main(){
    int num;
    printf ("Please enter number: ");
    scanf ("%d", &num);
    printf ("Output\n");
    for (int i = 1; i <=num; i++){
        if (i >= (num-(num-2)) && i <= (num-1)){
            printf("*");
            for (int j = 0; j < (num-2); j++){
            printf(" ");
        }
        printf("*\n");
        }
        else {
            printf("*");
            for (int j = 0; j < (num-2); j++){
            printf("*");
        }
        printf("*\n");
        }}
    return 0;
}