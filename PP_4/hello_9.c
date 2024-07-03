// 9 - Your younger brother studied in a primary school. He is fluent in the English alphabet. But he doesn't know about vowels and consonants. Your mother assigns you to teach him to know about which alphabets are vowels and consonants. So you will make a program (using else if ladder) where your brother writes any alphabet and your program will tell him that it is a vowel or consonant.
#include<stdio.h>
int main () { 
    char ch;
    scanf("%c",&ch);
    if (ch =='a'||ch =='e'||ch =='i'||ch =='o'||ch =='u' ||ch == 'A' || ch =='E'||ch =='I'||ch =='O'||ch =='U')
    {
        printf("%c is a vowel.",ch);
    }
    else{
        printf("%c is a consonant.",ch);
    }
    return 0;
}