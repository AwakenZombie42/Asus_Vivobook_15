// by ChatGPT does print proper output
#include <stdio.h>

// Function to calculate and print the nth term of the Fibonacci sequence
int fibonacci(int n)
{
    if (n <= 1)
        return n; // Base case: Fibonacci of 0 is 0, and Fibonacci of 1 is 1

    int fib = fibonacci(n - 1) + fibonacci(n - 2);
    return fib;
}

int main()
{
    int n;

    printf("Enter the number of terms in the Fibonacci sequence: ");
    scanf("%d", &n);

    printf("Fibonacci Sequence of %d terms:\n", n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", fibonacci(i));
    }

    return 0;
}
