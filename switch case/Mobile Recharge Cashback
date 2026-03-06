#include <stdio.h>
int main() {
    int plan, mode;
    int cost = 0, cashback = 0;
    scanf("%d %d", &plan, &mode);

    switch(plan) {
        case 1: cost = 199; break;
        case 2: cost = 399; break;
    }

    switch(mode) {
        case 11:
        case 12: cashback = 20; break;
        case 13: cashback = 0; break;
    }

    printf("Pay ₹%d", cost - cashback);
    return 0;
}
