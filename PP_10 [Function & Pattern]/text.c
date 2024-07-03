#include<stdio.h>
int main (){ 
  int n = 5; 
  int a[n][n]; 
for (int i = 1; i <=5; i++){
       for (int j = 1; j <=5; j++){
        scanf("%d",&a[i][j]);
       }
    }
    for (int i = 1; i <=5; i++){
       for (int j = 1; j <=5; j++){
        printf("%d",a[i][j]);
       }
       printf("\n");
    }
    return 0;
}