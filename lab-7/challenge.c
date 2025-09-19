#include <stdio.h>

int main() {
    int arr[5];
    int *ptr = arr;

    
    printf("Enter 5 integers: ");
    scanf("%d %d %d %d %d",ptr, ptr+1, ptr+2, ptr+3, ptr+4);

   
    for (int i = 0; i < 5 - 1; i++) {
        for (int j = 0; j < 5 - i - 1; j++) {
            if (*(ptr + j) > *(ptr + j + 1)) {
                int temp = *(ptr + j);
                *(ptr + j) = *(ptr + j + 1);
                *(ptr + j + 1) = temp;
            }
        }
    }

   
    printf("Sorted: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");

    return 0;
}