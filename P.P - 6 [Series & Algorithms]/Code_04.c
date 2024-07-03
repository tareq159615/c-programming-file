//4 - 1^2 + 2^2 + 3^2 + ……. N^2 = ?
#include<stdio.h>
int main () { 
    int N,sum=0; 
    scanf("%d",&N);
    for (int i = 1; i <= N ; i++)
    {

        if (N != i)
        {
            printf("%d^2+",i);
        }
        else{
            printf("%d^2=",i);
        }
        sum += i*i;
    }
    printf("%d",sum);
    return 0;
}