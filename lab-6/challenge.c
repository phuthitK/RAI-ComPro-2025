#include <stdio.h>

struct Student {
    char name[21];
    int id;
    float grades[4];
    float avg;
};

int main() {
    struct Student s[3];
    char *subjects[4] = {"Math", "English", "Science", "History"};
    float subjAvg[4] = {0};
    int topStudent = 0, topSubject = 0;

    for (int i = 0; i < 3; i++) {
        printf("Enter name, ID, and 4 grades for student %d:\n", i + 1);
        scanf("%s %d %f %f %f %f", s[i].name, &s[i].id,
              &s[i].grades[0], &s[i].grades[1],
              &s[i].grades[2], &s[i].grades[3]);
        printf ("\n");

        s[i].avg = (s[i].grades[0] + s[i].grades[1] +
                    s[i].grades[2] + s[i].grades[3]) / 4.0;

        if (s[i].avg > s[topStudent].avg)
            topStudent = i;

        for (int j = 0; j < 4; j++)
            subjAvg[j] += s[i].grades[j];
    }

    printf("\nStudent Averages:\n");
    for (int i = 0; i < 3; i++)
        printf("%s (ID: %d): %.2f\n", s[i].name, s[i].id, s[i].avg);

    printf("\nTop Student: %s with %.2f\n",
           s[topStudent].name, s[topStudent].avg);

    printf("\nSubject Averages:\n");
    for (int j = 0; j < 4; j++) {
        subjAvg[j] /= 3.0;
        printf("%s: %.2f\n", subjects[j], subjAvg[j]);
        if (subjAvg[j] > subjAvg[topSubject])
            topSubject = j;
    }

    printf("\nTop Subject: %s with average %.2f\n",
           subjects[topSubject], subjAvg[topSubject]);

    return 0;
}
