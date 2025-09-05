#include <stdio.h>
#include <string.h>

struct Student {
    char name[100];
    int age;
    float score;
};

int main() {
    struct Student s[3], temp;

    for (int i = 0; i < 3; i++) {
        printf("Student %d's name: ", i + 1);
        scanf(" %[^\n]", s[i].name);
        printf("Student %d's age: ", i + 1);
        scanf("%d", &s[i].age);
        printf("Student %d's score: ", i + 1);
        scanf("%f", &s[i].score);
        printf("\n");
    }

  
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2 - i; j++) {
            if (s[j].score > s[j + 1].score) {
                temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }

    // highest is at the last index after sorting
    printf("The highest score belongs to %s at %.1f scores!\n",
           s[2].name, s[2].score);

    return 0;
}
