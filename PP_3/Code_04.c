// G. Summation from 1 to N 
#include<stdio.h>
int main (){
    long long sum,n; 
    scanf("%lld",&n);
    sum = (n*(n+1))/2;
    printf("%lld",sum);   
}