// Write a program to find the length of a string using strlen().

#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    fgets(str, 100, stdin);

    str[strcspn(str, "\n")] = '\0';

    int size = strlen(str);

    printf("%d\n", size);

    return 0;
}
