// If-Else Statement
# include<stdio.h>

int main(void)
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if (a >= 0)
    {
        if(a%2==0)
        {
            printf("positive even number\n");
        }
        else
        {
            printf("positive odd number\n");
        }
    }
    else
    {
        if(a%2==0)
        {
            printf("negative even number\n");
        }
        else
        {
            printf("negative odd number\n");
        }
    }
    return 0;
}