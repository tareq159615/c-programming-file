// Write a program to print the Pyramid Star Pattern.

#include<stdio.h>
int main(){
    for (int i = 0; i < 5; i++)
    {
       for (int j = 0; j < 5; j++)
       {
        if (i==2 && j==2){
            printf("O ");
        }else{
            printf("S ");
        }
       }
       printf("\n");
    }
    
    return 0;
}