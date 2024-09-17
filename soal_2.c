#include <stdio.h>
#include <strings.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char firstWord[100];
    char secondWord[100];
    
    scanf("%s", firstWord);
    scanf("%s", secondWord);
    
    int compare = strcasecmp(firstWord, secondWord);
    
    if (compare == 0) {
        int secCompare = strcmp(firstWord, secondWord);
        secCompare == 0 ? printf("IDENTIK") : printf("MIRIP");
    } else {
        printf("BERBEDA");
    }
    return 0;
}