// keep taking numbers as input from user until user enters a odd number
# include<stdio.h>

int main(void)
{
    int n;
    do
    {
        printf("Enter a number: \n");
        scanf("%d", &n);
        printf("%d\n", n);
        if(n%2!=0)
        {
            break;
        }
    }while(1);
    printf("Thank you");
    return 0;
}