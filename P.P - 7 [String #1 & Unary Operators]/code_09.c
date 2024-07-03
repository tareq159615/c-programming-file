// Write a program to count the total number of vowels, consonants, and digits in a string.
// Input format
// Output format
// abc123
// Total number of digits: 3
// Total number of vowels: 1
// Total number of consonants: 2


#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main() { 
    char ch[100];
    scanf("%s", ch);
    
    int vow = 0, con = 0, dig = 0; 
    
    for (int i = 0; ch[i] != '\0'; i++) {
        if ( isalpha(ch[i])) {
            if (ch[i]=='a' || ch[i]=='e' || ch[i]=='i' || ch[i]=='o' || ch[i]=='u' 
            || ch[i]=='A' || ch[i]=='E' || ch[i]=='I' || ch[i]=='O' || ch[i]=='U')
            {
                vow++;
            }else{
                con++;
            }
                
        } else if (isdigit(ch[i])) {
            dig++;
        }
    } 
    
    
    printf("Total number of digits: %d\n", dig);
    printf("Total number of vowels: %d\n", vow);
    printf("Total number of consonants: %d\n", con);
    
    return 0;
}
