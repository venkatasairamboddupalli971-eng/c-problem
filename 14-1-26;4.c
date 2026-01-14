#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int freq[256] = {0};

    printf("Enter string: ");
    gets(str);

    for(int i=0; str[i]!='\0'; i++)
        freq[str[i]]++;

    for(int i=0; i<256; i++) {
        if(freq[i] > 0 && i != ' ')
            printf("%c%d ", i, freq[i]);
    }

    return 0;
}