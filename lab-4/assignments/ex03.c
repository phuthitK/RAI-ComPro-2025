// The exercise from page 34

#include <stdio.h>

int main(){

    int i = 0;
    while (i<7) printf ("%d", i--);
    return 0;
}

// This code causes infinite loop because i is already less than 7 and i decreases