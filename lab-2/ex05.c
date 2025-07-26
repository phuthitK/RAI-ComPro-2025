#include <stdio.h>

int main(){

    char name[20], uni[10];
    int age;
    float height;

    printf ("Enter your full name: ");
    scanf(" %[^\n]", name);
    printf ("Enter your age: ");
    scanf(" %d", &age);
    printf ("Enter your height: ");
    scanf(" %f", &height);
    printf ("Enter your University name: ");
    scanf(" %[^\n]", uni);

    printf ("Hi! Everyone. This is %s from %s. I am %d years old and my height is %.1f cm tall.\n",name,uni,age,height);

    return 0;
}