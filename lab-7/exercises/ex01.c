#include <stdio.h>

int main() {
    int A[3][3];
    int *p = &A[0][0];  

    
    

    printf("Enter 9 integers: ");
    for (int i = 0; i < 9; i++) {
        scanf("%d", p + i);
    }

    
    printf("3x3 Array:\n");
    for (int i = 0; i < 9; i++) {
        printf("%d ", *(p + i));
        if ((i + 1) % 3 == 0) printf("\n");
    }

    return 0;
}
