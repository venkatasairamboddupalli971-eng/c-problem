#include <stdio.h>
#include <stdbool.h>

int main() {
    bool arr[5] = {true, false, true, false, true};
    int i;

    for (i = 0; i < 5; i++) {
        if (arr[i] == true)
            printf("arr[%d] = true\n", i);
        else
            printf("arr[%d] = false\n", i);
    }

    return 0;
}
