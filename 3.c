#include <stdio.h>

int main() {
    int n, sum = 0;
    scanf("%d", &n);
    while (n != 0) {
        if (n % 10 == 3) {
            sum += n;
        }
        scanf("%d", &n);
    }
    printf("%d", sum);

    return 0;
}