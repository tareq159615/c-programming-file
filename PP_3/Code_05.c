// Create a program that initializes a variable called count with the value 0, then use an assignment operator to increment it by 5. Print the updated value of the count.

#include<stdio.h>
int main (){
    int count;
    scanf("%d",&count);
    count +=5; 
    printf("%d",count);
    return 0;
}