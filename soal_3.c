#include <stdio.h>

int main() {

    float input;
    
    scanf("%f", &input);
    
    printf("%.5f ", 4*input/5);
    printf("%.5f ", 9*input/5+32);
    printf("%.5f", input+273);
    
    return 0;
}
