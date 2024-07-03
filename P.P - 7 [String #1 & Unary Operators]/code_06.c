// Write a program to compare two strings (Don’t use built-in function)

#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int equal=1,i;
    scanf("%s %s", str1,str2);

    for (i = 0; str1[i] != '\0' || str2[i] != '\0'; i++) {
        if (str1[i] != str2[i]) {
            equal=1;
            break;
        }
    }
    if (equal) {
        printf("The strings are equal.\n");
    } else {
        printf("The strings are different.\n");
    }

    return 0;
}
