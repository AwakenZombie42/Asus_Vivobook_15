# include<stdio.h>

int main(void)
{
    int n, i = 1;
    printf("Enter a number: \n");
    scanf("%d", &n);
    do
    {
        printf("hello, world %d\n", i);
        i++;
    }while(i <= n);
}