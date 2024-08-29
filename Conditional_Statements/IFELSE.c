// If-Else Statement
# include<stdio.h>

int main(void)
{
    int a;
    printf("Enter a number between 0 and 1000: ");
    scanf("%d", &a);
    if (a < 0)
    {
        printf("please enter a positive number");
    }
    else if (a > 0 && a < 10)
    {
        printf("This is a 1 digit number");
    }
    else if (a >= 10 && a < 100)
    {
        printf("This is a 2 digit number");
    }
    else if (a >= 100 && a <= 999)
    {
        printf("This is a 3 digit number");
    }
    else
    {
        printf("This number is out side the range");
    }
    return 0;
}