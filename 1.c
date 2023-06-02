#include <stdio.h>

int getSeconds(int k) {
    printf("%d", k%3600);
}

int main() {
    int k;
    scanf("%d", &k);
    getSeconds(k);
    
    return 0;
}