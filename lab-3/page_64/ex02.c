#include <stdio.h>

int main() {
    int element, atoms, state, hasHydrogen;
    /*
      element: 1 = Carbon, 2 = Nitrogen
      state:   1 = gas, 2 = liquid, 3 = solid
      hasHydrogen: 1 = yes, 0 = no
    */

    printf("Enter element (1 = Carbon, 2 = Nitrogen): ");
    scanf("%d", &element);
    printf("Enter number of atoms: ");
    scanf("%d", &atoms);
    printf("Enter state (1 = gas, 2 = liquid, 3 = solid): ");
    scanf("%d", &state);
    printf("Has Hydrogen? (1 = yes, 0 = no): ");
    scanf("%d", &hasHydrogen);

    if (element == 1 && atoms == 5 && state == 1) {
        if (hasHydrogen == 1)
            printf("Type 5 compound\n");
        else
            printf("Type 1 compound\n");
    }
    else if (element == 1 && atoms == 6 && state == 2)
        printf("Type 2 compound\n");
    else if (element == 2 && atoms == 6 && state == 1)
        printf("Type 3 compound\n");
    else if (element == 2 && atoms == 4 && state == 3)
        printf("Type 4 compound\n");
    else
        printf("Unknown compound type\n");

    return 0;
}
