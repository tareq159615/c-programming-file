#include <stdio.h>
int main() {
    int a,b,c,d,e; 
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    int x = a + b + c + d + e;
    double y = x / 5.0;
    double z = (x / 500.0) * 100;
    printf("Total marks = %d\n", x);
    printf("Average marks = %.2lf\n", y);
    printf("percentage of the marks = %.2lf\n", z);
    return 0;
}
