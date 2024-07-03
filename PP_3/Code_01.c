// C. Simple Calculator
#include<stdio.h>
int main () {
    long long a, b;
    scanf("%lld%lld",&a, &b);
    long long sum = a+b; 
    long long sub = a-b; 
    long long m = a*b; 
    printf("%lld + %lld = %lld\n", a, b, sum);
    printf("%lld * %lld = %lld\n", a, b, m);
    printf("%lld - %lld = %lld", a, b, sub);
    return 0;
}