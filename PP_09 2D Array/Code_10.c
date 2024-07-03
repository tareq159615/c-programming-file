// Write a program to Search a number in a matrix. The Number should also be taken first from the user.

// Input:
// 9
// 1 2 3 4
// 5 6 7 8
// 9 2 1 2
// Output:
// 9 is found.
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[4][4];
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            scanf("%d",&a[i][j]);
        }
    }

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            if (a[i][j] == n){
               printf("9 is found.");
               break;
            }
        }
    }
    
    return 0;
}