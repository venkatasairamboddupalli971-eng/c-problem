#include <stdio.h>
#include <string.h>

int main() {
    char s1[50], s2[50];
    int count1[256]={0}, count2[256]={0};

    printf("Enter first string: ");
    gets(s1);
    printf("Enter second string: ");
    gets(s2);

    if(strlen(s1) != strlen(s2)) {
        printf("Not Anagram\n");
        return 0;
    }

    for(int i=0; s1[i]!='\0'; i++) {
        count1[s1[i]]++;
        count2[s2[i]]++;
    }

    for(int i=0;i<256;i++) {
        if(count1[i] != count2[i]) {
            printf("Not Anagram\n");
            return 0;
        }
    }

    printf("Anagram\n");
    return 0;
}