// 2 - Write a program to create a Simple Calculator using a switch case. For this problem, in the first line, you need to take two numbers and in the second line, you need to take the operator.
#include<stdio.h>
int main (){
    int x,y; 
    char ch;

    scanf("%d %d", &x, &y);

    scanf(" %c", &ch);

    switch (ch)
    {
    case '+':
        /* code */
        printf("%d + %d = %d",x,y,x+y);
        break;
    case '-': 
        printf("%d - %d = %d",x,y,x-y);
        break;
    case '*':
        /* code */
        printf("%d * %d = %d",x,y,x*y);
        break;
    case '/': 
        printf("%d / %d = %d",x,y,x/y);
        break;
    default:
    printf("Oprator thik kor");
        break;
    }
    return 0;
}

 