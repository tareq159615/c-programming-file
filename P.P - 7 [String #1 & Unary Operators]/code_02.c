// Write a program to print your full name(The size of the string or full name should be taken from the user by gets()).
// Hints: You need to use getchar()

#include<stdio.h>
#include<string.h>

int main() {
    int n;
    scanf("%d ", &n);
    char name[n];
    gets(name);

    puts(name);
    return 0;
}
