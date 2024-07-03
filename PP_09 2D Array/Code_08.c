// Write a program to Count total odd and even numbers from a matrix.

// Input:
// 1 2 3 4
// 5 6 7 8
// 9 2 1 2
// Output:
// Total odd numbers: 6
// Total even numbers: 6
#include<stdio.h>
int main (){
    int a[3][4];
    int even=0,odd=0;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++){
            scanf("%d ",&a[i][j]);
        }
    }

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++){
            if (a[i][j]%2==0){
                even++;
            }else{
               odd++;
            }
        }
    }

printf("Total odd numbers: %d\n",odd);
printf("Total even numbers: %d",even);
    
    return 0;
}