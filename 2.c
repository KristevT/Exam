#include <stdio.h>

int sumFoo(int n) {
    int sum = 0;
    for (int i = 3; i <= n; i++) {
        sum += (i-2) * (i-1) * i;
    }
    printf("%d", sum);

    return 0;
}

int main() {
    int n;
    scanf("%d", &n);
    sumFoo(n);
}