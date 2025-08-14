#include <stdio.h>

int main() {
    int calScore, phyScore, compScore;
    char calGrade, phyGrade, compGrade;
    float calGPA, phyGPA, compGPA, GPA;

    printf("Calculus score: ");
    scanf("%d", &calScore);
    printf("Physics score: ");
    scanf("%d", &phyScore);
    printf("Compro score: ");
    scanf("%d", &compScore);

    // Calculus
    if (calScore >= 80) {
        calGrade = 'A'; calGPA = 4.0;
    } else if (calScore >= 70) {
        calGrade = 'B'; calGPA = 3.0;
    } else if (calScore >= 60) {
        calGrade = 'C'; calGPA = 2.0;
    } else if (calScore >= 50) {
        calGrade = 'D'; calGPA = 1.0;
    } else {
        calGrade = 'F'; calGPA = 0.0;
    }

    // Physics
    if (phyScore >= 80) {
        phyGrade = 'A'; phyGPA = 4.0;
    } else if (phyScore >= 70) {
        phyGrade = 'B'; phyGPA = 3.0;
    } else if (phyScore >= 60) {
        phyGrade = 'C'; phyGPA = 2.0;
    } else if (phyScore >= 50) {
        phyGrade = 'D'; phyGPA = 1.0;
    } else {
        phyGrade = 'F'; phyGPA = 0.0;
    }

    // Compro
    if (compScore >= 80) {
        compGrade = 'A'; compGPA = 4.0;
    } else if (compScore >= 70) {
        compGrade = 'B'; compGPA = 3.0;
    } else if (compScore >= 60) {
        compGrade = 'C'; compGPA = 2.0;
    } else if (compScore >= 50) {
        compGrade = 'D'; compGPA = 1.0;
    } else {
        compGrade = 'F'; compGPA = 0.0;
    }

    // GPA calculation
    GPA = (calGPA + phyGPA + compGPA) / 3.0;

    // Output table
    printf("\n\n%-10s %-7s %-7s %-7s\n", "Subject", "Score", "Grade", "GPA");
    printf("--------------------------------------\n");
    printf("%-10s %-7d %-7c %-7.1f\n", "Cal", calScore, calGrade, calGPA);
    printf("%-10s %-7d %-7c %-7.1f\n", "Physics", phyScore, phyGrade, phyGPA);
    printf("%-10s %-7d %-7c %-7.1f\n", "Compro", compScore, compGrade, compGPA);
    printf("GPA: %.1f\n", GPA);

    return 0;
}
