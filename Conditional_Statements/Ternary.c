//Ternary Operator
# include<stdio.h>

int main(void)
{
    char a;
    printf("Yes or No(Enter Y/N): ");
    scanf("%c", &a);
    a == 'Y' || a == 'y' ? printf("Yes") : printf("No");
    return 0;
}