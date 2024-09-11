#include <stdio.h>

int main() {
    int input[10];
    int output = -1000;
    
    for (int i = 0; i < 10; i++) {
     scanf("%d", &input[i]);
     input[i] > output ? output = input[i] : 0; 
    }
    
    printf("%d", output);
    return 0;
}