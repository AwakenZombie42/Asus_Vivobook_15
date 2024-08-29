//Check if a number is divisible by 2 or not.
# include<stdio.h>

int main(void)
{
    int n;
    printf("Enter a number to check if it is divisible by 2 or not.:\n");
    scanf("%d", &n);
    if (n%2==0)
    {
        printf("The number is divisible by 2.\n"); 
    }
    else
    {
        printf("The number is not divisible by 2.\n");
    }
    // Can use this also
    printf("%d", n%2==0);
}