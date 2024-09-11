#include <stdio.h>

int main() {    
    int input;
    scanf("%d", &input);
    
    input % 2 != 0 ? printf("Ganjil") : printf("Genap");
    return 0;
}