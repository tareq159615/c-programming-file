// Write a program to make such a pattern like a right angle triangle with the number increased by 1.

#include<stdio.h>
int main(){
    int c = 1;
    for(int i = 1; i < 5; i++){
        for(int j = 1; j <= i; j++){
            printf("%d ",c);
            c++;
        }
        printf("\n");
    }
}
