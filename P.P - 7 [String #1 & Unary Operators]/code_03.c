//  Write a program to find the length of a string (Don’t use built-in function)

 #include <stdio.h>

int main() {
    char name[20];
    fgets(name,20,stdin);
    int i = 0,count = 0 ;
    while (name[i] != '\0') 
    {
        count++;
        i++;
    }
    printf("%d",count);
    return 0;
}