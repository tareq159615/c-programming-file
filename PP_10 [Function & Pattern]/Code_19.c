#include <stdio.h>

int findMax(int n) {
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
  
    int max = arr[0]; 
    
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    
    printf("Maximum element is %d.",max);
}

int main() {
  int n;
  scanf("%d",&n);
  
  
    findMax(n);
    return 0;
}
