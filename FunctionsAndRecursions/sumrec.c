# include<stdio.h>

int sum(int n);

int main(void)
{
    int n;
    printf("Enter a number: \n");
    scanf("%d", &n);
    printf("The sum of first %d natural numbers is: %d", n,sum(n));
    return 0;
}

int sum(int n)
{
    if(n == 1)
    {
        return 1;
    }
    int sum1 = sum(n-1) + n;
    return sum1;
}