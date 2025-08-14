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

    switch (atoms) {
        case 5:
            if (element == 1 && state == 1) {
                if (hasHydrogen == 1)
                    printf("Type 5 compound\n");
                else
                    printf("Type 1 compound\n");
            } else {
                printf("Unknown compound\n");
            }
            break;
        case 6:
            if (element == 1 && state == 2)
                printf("Type 2 compound\n");
            else if (element == 2 && state == 1)
                printf("Type 3 compound\n");
            else
                printf("Unknown compound\n");
            break;
        case 4:
            if (element == 2 && state == 3)
                printf("Type 4 compound\n");
            else
                printf("Unknown compound\n");
            break;
        default:
            printf("Unknown compound\n");
    }

    return 0;
}
