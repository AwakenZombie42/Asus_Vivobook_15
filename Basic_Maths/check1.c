//Check if a number is even or odd.
# include<stdio.h>

int main(void)
{
    int n;
    printf("Enter a number to check if it is even or odd.:\n");
    scanf("%d", &n);
    if (n%2==0)
    {
        printf("The number is even.\n"); 
    }
    else
    {
        printf("The number is odd.\n");
    }
    /*
    Can use this also
    0 => odd
    1 => even
    */
    printf("%d", n%2==0);
}