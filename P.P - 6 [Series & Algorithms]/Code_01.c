// 1-  1 + 2 + 3 + 4 + 5 + …… + N = ?
#include<stdio.h>
int main () { 
    int N,sum=0; 
    scanf("%d",&N);
    for (int i = 1; i <= N ; i++)
    {
        if (N != i)
        {
            printf("%d+",i);
        }
        else{
            printf("%d=",i);
        }
        sum += i ;
    }
    printf("%d",sum);
    return 0;
}