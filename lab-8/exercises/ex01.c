#include <stdio.h>
#include <string.h>

struct product {
    char name[15];
    int number;
    float price;
};

struct product getdata(void) {
    struct product x;
    strcpy(x.name, "Chewing gum");
    x.number = 100;
    x.price = 25.5;
    return x;
}


void showdata(struct product x) {
    printf("Product name: %s\n", x.name);
    printf("Product number: %d\n", x.number);
    printf("Product price: %.2f\n\n", x.price);
}


void add10(struct product *x) {
    x->number += 10;
}


void sub10(struct product *x) {
    if (x->number > 10)
        x->number -= 10;
    else
        x->number = 0;  
}

int main(void) {
    struct product y;

    y = getdata();
    showdata(y);

    add10(&y);
    add10(&y);
    showdata(y);

    sub10(&y);
    showdata(y);

    return 0;
}
