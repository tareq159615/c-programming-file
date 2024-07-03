//2-Write a program to insert an element in an array. For adding the number in a specific position you have to take the position first then the number you want to insert.

#include<stdio.h>

int main() {
    int arr[100], size, i, p, value;
    scanf("%d %d", &p, &value);
    scanf("%d", &size);

    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = size - 1; i >= p - 1; i--) {
        arr[i + 1] = arr[i];
    }

    arr[p - 1] = value;
    size++; 

    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
