// Write a program to find the total number of alphabets, digits, or special characters in a string (You may use isalpha(), isdigit()).
// Note: Don’t use fgets() to take the input.
// Input:
// abc12@#
// Output:
// Total number of alphabets: 3
// Total number of digits: 2
// Total number of special characters: 2


#include<stdio.h>
#include<ctype.h>

int main() { 
    char ch[100];
    scanf("%s", ch);
    
    int alp = 0, dig = 0, cha = 0; 
    
    for (int i = 0; ch[i] != '\0'; i++) {
        if (isalpha(ch[i])) {
            alp++;
        } else if (isdigit(ch[i])) {
            dig++;
        } else {
            cha++;
        }
    }
    
    printf("Total number of alphabets: %d\n", alp);
    printf("Total number of digits: %d\n", dig);
    printf("Total number of special characters: %d\n", cha);
    
    return 0;
}
