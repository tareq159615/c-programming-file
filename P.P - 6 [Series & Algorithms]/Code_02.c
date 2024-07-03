// 2 - 2 + 4 + 6 + ……… + N = ?
#include<stdio.h>
int main () { 
    int N,sum=0; 
    scanf("%d",&N);
    for (int i = 1; i <= N ; i++)
    {
        if (i%2==0)
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
    }
    printf("%d",sum);
    return 0;
}