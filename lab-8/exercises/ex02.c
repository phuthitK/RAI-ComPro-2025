#include <stdio.h>
#include <string.h>

void callnum(int i, char y[]) {
    char data[10][8] = {"zero","one","two","three","four",
                        "five","six","seven","eight","nine"};
    strcpy(y, data[i]);
}

int main(void) {
    char ch[10];
    int i;
    int telno[10] = {0,2,7,3,7,3,0,0,0,0};

    for (i = 0; i < 10; i++) {
        callnum(telno[i], ch);
        printf("%s ", ch);
    }
    return 0;
}
