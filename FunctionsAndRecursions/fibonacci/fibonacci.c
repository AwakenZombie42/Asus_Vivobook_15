/*
by Shradha,
doesn't print sequence
only print the last
number of the sequence
that is why i made this
folder to show other way
with and without recursion
that can properly print sequence.
*/
# include<stdio.h>

int fib(int n);

int main(void)
{
    int n;
    printf("Enter a number for its fibonacci: \n");
    scanf("%d", &n);
    printf("The fibonacci of %d is:\n", n);
    printf("%d",fib(n));
    return 0;
}

int fib(int n)
{
    if(n == 0)
    {
        return 0;
    }
    if(n == 1)
    {
        return 1;
    }
    int f0 = fib(n-1);
    int f1 = fib(n-2);
    int f2 = f0 + f1;
    return f2;
}
/*
=> ChatGPT
#include <stdio.h>

// Function to calculate and print the nth term of the Fibonacci sequence
int fibonacci(int n)
{
    if (n <= 1)
    {
        return n; // Base case: Fibonacci of 0 is 0, and Fibonacci of 1 is 1
    }
    else
    {
        int fib = fibonacci(n - 1) + fibonacci(n - 2);
        printf("%d ", fib); // Print the Fibonacci number for the current term
        return fib;
    }
}

int main()
{
    int n;

    printf("Enter the number of terms in the Fibonacci sequence: ");
    scanf("%d", &n);

    printf("Fibonacci Sequence of %d terms:\n", n);

    if (n >= 1)
    {
        printf("0 "); // Print the first term (Fibonacci of 0)
    }
    if (n >= 2)
    {
        printf("1 "); // Print the second term (Fibonacci of 1)
    }

    if (n >= 3)
    {
        // Start the recursion from the 3rd term since the first two terms are already printed
        fibonacci(n - 1);
    }

    return 0;
}
*/