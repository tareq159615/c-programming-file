// Write a program to find the frequency of each character.

#include <stdio.h>
#include <string.h>

int main() {
    char a[100];
    scanf("%s", a);

    int freq[256] = {0};

    for (int i = 0; i < strlen(a); i++) {
        freq[a[i]]++;
    }

    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            printf("%c: %d\n", i, freq[i]);
        }
    }

    return 0;
}
