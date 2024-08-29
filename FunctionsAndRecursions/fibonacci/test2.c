// by ChatGPT does print proper output
#include <stdio.h>

int main() {
    int n, i;
    long long int a = 0, b = 1, nextTerm; // Use long long for larger Fibonacci numbers

    printf("Enter the number of terms in the Fibonacci sequence: ");
    scanf("%d", &n);

    printf("Fibonacci Sequence of %d terms:\n", n);

    if (n >= 1) {
        printf("%lld ", a); // Print the first term (Fibonacci of 0)
    }
    if (n >= 2) {
        printf("%lld ", b); // Print the second term (Fibonacci of 1)
    }

    for (i = 3; i <= n; i++) {
        nextTerm = a + b;
        printf("%lld ", nextTerm);
        a = b;
        b = nextTerm;
    }

    return 0;
}
