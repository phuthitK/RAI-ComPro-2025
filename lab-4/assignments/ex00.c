// The exercise from page 32
#include <stdio.h>

int main(){
    
    printf ("Decimal\t\t\tASCII\n");

    for (int i = 33; i <=55; i++){

        printf("%d\t\t\t%c\n",i,i);
    }

    return 0;

}