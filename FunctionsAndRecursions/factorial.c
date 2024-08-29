# include<stdio.h>

int factorial(int n);

int main(void)
{
    int n;
    printf("Enter a number for its factorial: \n");
    scanf("%d", &n);
    printf("The factorial of %d is: %d", n, factorial(n));
    return 0;
}

int factorial(int n)
{
    if(n == 1)
    {
        return 1;
    }
    int f0 = factorial(n-1);
    int f1 = f0 * n;
    return f1;
}