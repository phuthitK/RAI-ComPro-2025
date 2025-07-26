#include <stdio.h>

int main () {
    int age = 0;
    float height;
    int weight;
    char gender;
    char edu[40];
    char name[40];  // increased buffer size for safety

    printf("Enter your Name: ");
    scanf(" %[^\n]", name);  // space before %[^\n] handles leftover '\n'

    printf("Enter your Age: ");
    scanf("%d", &age);

    printf("Enter your height: ");
    scanf("%f", &height);

    printf("Enter your weight: ");
    scanf("%d", &weight);

    printf("Enter your gender: ");
    scanf(" %c", &gender);  // space before %c to consume any leftover whitespace

    printf("Enter your Education Qualification: ");
    scanf(" %[^\n]", edu); 


    printf("\nName: %s\n", name);
    printf("Age: %d\n", age);
    printf("Gender: %c\n", gender);
    printf("Height: %.1f\n", height);
    printf("Weight: %d\n", weight);
    printf("Education: %s\n", edu);

    return 0;
}
