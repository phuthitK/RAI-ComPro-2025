#include <stdio.h>

int main(){

    int A[3][3] = {1,0,-1,-1,2,3,2,4,5};
    int iden[3][3] = {1,0,0,0,1,0,0,0,1};

    printf ("Input Matrix\n");
    // I will show you input matrix.
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            // A[i][j] = A[i][j] * iden[j][i];
            printf("%d\t",A[i][j]);
        }
        printf ("\n");
    }

    printf ("\n");
    printf ("Diagonal Matrix\n");
    // This is the output matrix.
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            A[i][j] = A[i][j] * iden[j][i];
            printf("%d\t",A[i][j]);
        }
        printf ("\n");
    }



    return 0;
}