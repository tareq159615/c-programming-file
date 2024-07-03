#include<stdio.h>

int main () {
    int b, a, index = 0; 
    scanf("%d", &b);
    int x[b];
    for (int i = 0; i < b; i++){
        scanf("%d", &x[i]);
    }

    scanf("%d", &a);
    int y[a];
    for (int i = 0; i < a; i++){
        scanf("%d", &y[i]);
    }

    int c[a + b];

    for (int i = 0; i < b; i++) {
        c[index++] = x[i];
    }
    for (int i = 0; i < a; i++) {
        c[index++] = y[i];
    }
    
    for (int i = 0; i < (a + b); i++) {
        printf("%d ", c[i]);
    }
    
    return 0;
}
