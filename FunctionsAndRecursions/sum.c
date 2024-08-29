# include<stdio.h>

int input();
int sum(int a, int b);

int main(void)
{
    int a,b;
    printf("Enter two numbers to add: \n");
    a = input();
    b = input();
    printf("The sum of two numbers is: %d", sum(a,b));
    return 0;
}

int input()
{
    int n;
    scanf("%d", &n);
    return n;
}

int sum(int a, int b)
{
    return a + b;
}