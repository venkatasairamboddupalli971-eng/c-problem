#include <stdio.h>
int main() {
    int type, balance, withdraw;
    scanf("%d %d %d", &type, &balance, &withdraw);

    switch(type) {
        case 1:
            if(balance >= withdraw)
                printf("Transaction Successful");
            else
                printf("Insufficient Balance");
            break;

        case 2:
            if(withdraw > 5000)
                printf("Limit Exceeded");
            else
                printf("Transaction Successful");
            break;
    }
    return 0;
}
