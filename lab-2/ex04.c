#include <stdio.h>
int main (){

    char name[10];
    int ID;
    float prog, phys, calc, GPA;

    printf ("Enter your Name: ");
    scanf(" %[^\n]", name);
    printf ("Enter your student ID: ");
    scanf(" %d", &ID);
    printf ("Enter your Programming score: ");
    scanf(" %f", &prog);
    printf ("Enter your Physics score: ");
    scanf(" %f", &phys);
    printf ("Enter your Calculus score: ");
    scanf(" %f", &calc);
    GPA = (prog + phys + calc) / 3;
    printf ("Hi %s(%d)! Your GPA is %.2f\n", name, ID, GPA);

    return 0;

}