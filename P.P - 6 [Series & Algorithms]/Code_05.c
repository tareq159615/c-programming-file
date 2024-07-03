// 1 + 1/2 + 1/3 + 1/4 + 1/5 ... 1/n  = ?
#include<stdio.h>
int main () { 
    int N;
    float sum = 0; 
    scanf("%d",&N);
    for (int i = 1; i <= N ; i++)
    {

        if (i==1)
        {
            printf("1+",i);
        }  
        else if (N != i)
        {
            printf("1/%d+",i);
        }
        else{
            printf("1/%d=",i);
        }
        sum += 1.00/i;
    }
    printf("%.3f",sum);
    return 0;
}