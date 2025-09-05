#include <stdio.h>

struct Time {
    int minute, second;
};

int main() {
    struct Time t[3];
    int total = 0;

    for (int i = 0; i < 3; i++) {
        printf("Time input (m:s): ");
        scanf("%d:%d", &t[i].minute, &t[i].second);
        total += t[i].minute * 60 + t[i].second;
    }

    printf("Total time elapsed: %d second(s)\n", total);
    return 0;
}
