#include <stdio.h>

int main() {
    int n, i, isPrime = 1;

    scanf("%d", &n);

    if (n > 0)
        printf("Positive\n");
    if (n < 0)
        printf("Negative\n");
    if (n == 0)
        printf("Zero\n");

    if (n % 2 == 0)
        printf("Even\n");
    else
        printf("Odd\n");

    if (n <= 1)
        isPrime = 0;

    for (i = 2; i <= n - 1; i++) {
        if (n % i == 0) {
            isPrime = 0;
            break;
        }
    }

    if (isPrime)
        printf("Prime\n");
    else
        printf("Not Prime\n");

    return 0;
}
