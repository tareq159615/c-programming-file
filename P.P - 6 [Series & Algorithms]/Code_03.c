// 3 - 1 + 3 + 5 + ……… + N = ?
#include<stdio.h>

int main() {
    int N, sum = 0;
    scanf("%d", &N);
    
    for (int i = 1; i <= N; i++) {
        if (i % 2 != 0) {
            
            if (i != N-1) {
                printf("%d+", i);
            } else {
                printf("%d=", i);
            }
            sum += i;
        }
    }
    
    printf("%d\n", sum);
    return 0;
}
