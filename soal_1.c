#include <stdio.h>
#include <stdlib.h>
    
int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int length;
    scanf("%d", &length);
    
    int input[length];
    for (int i = 0; i < length; i++) {
     scanf("%d", &input[i]);
    }
    
    int n = sizeof(input) / sizeof(input[0]);
    qsort(input, n, sizeof(int), compare);
    for (int i = 0; i < n; i++) {
        printf("%d\n", input[i]);
    }
    
    return 0;
}