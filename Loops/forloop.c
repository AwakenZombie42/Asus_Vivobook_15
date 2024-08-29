# include<stdio.h>

int main(void)
{
    int n;
    printf("Enter a number: \n");
    scanf("%d", &n);
    for(int i = n; i > 0; i--)
    {
        printf("hello, world %d\n", i);
    }
    return 0;
}