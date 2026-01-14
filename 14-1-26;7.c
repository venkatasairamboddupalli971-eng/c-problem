#include <stdio.h>
#include <string.h>

int main() {
    char str[100], word[20];
    char largest[20], smallest[20];
    int i = 0, j = 0;

    printf("Enter string: ");
    gets(str);

    while(1) {
        if(str[i] != ' ' && str[i] != '\0') {
            word[j++] = str[i];
        } else {
            word[j] = '\0';

            if(strlen(word) > 0) {
                if(strlen(largest) == 0 || strlen(word) > strlen(largest))
                    strcpy(largest, word);
                if(strlen(smallest) == 0 || strlen(word) < strlen(smallest))
                    strcpy(smallest, word);
            }
            j = 0;
        }

        if(str[i] == '\0')
            break;
        i++;
    }

    printf("Largest: %s\n", largest);
    printf("Smallest: %s\n", smallest);

    return 0;
}