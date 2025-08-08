#include <stdio.h>

char getLetterGrade(float score) {
    if (score >= 80) return 'A';
    else if (score >= 70) return 'B';
    else if (score >= 60) return 'C';
    else if (score >= 50) return 'D';
    else return 'F';
}


float getNumericGrade(char grade) {
    switch (grade) {
        case 'A': return 4.0;
        case 'B': return 3.0;
        case 'C': return 2.0;
        case 'D': return 1.0;
        default: return 0.0;
    }
}

int main() {
    float calculus, physics, compro;
    char gradeCal, gradePhy, gradeComp;
    float pointCal, pointPhy, pointComp, gpa;

  
    printf("Calculus score: ");
    scanf("%f", &calculus);
    printf("Physic score: ");
    scanf("%f", &physics);
    printf("compro score: ");
    scanf("%f", &compro);

    gradeCal = getLetterGrade(calculus);
    gradePhy = getLetterGrade(physics);
    gradeComp = getLetterGrade(compro);

    pointCal = getNumericGrade(gradeCal);
    pointPhy = getNumericGrade(gradePhy);
    pointComp = getNumericGrade(gradeComp);

   
    gpa = (pointCal + pointPhy + pointComp) / 3;

  
    printf("\n%-10s %-6s %-6s %-6s\n", "Subject", "Score", "Grade", "Grade");
    printf("---------------------------------\n");
    printf("%-10s %-6.0f %-6c %-6.1f\n", "Cal", calculus, gradeCal, pointCal);
    printf("%-10s %-6.0f %-6c %-6.1f\n", "Physics", physics, gradePhy, pointPhy);
    printf("%-10s %-6.0f %-6c %-6.1f\n", "compro", compro, gradeComp, pointComp);

    printf("\nGPA: %.1f\n", gpa);

    return 0;
}