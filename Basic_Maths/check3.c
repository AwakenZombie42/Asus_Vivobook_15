//WAP to check if given character is digit or not
# include<stdio.h>
int main(void)
{
    char c;
    printf("Enter a character:\n");
    scanf("%c", &c);
    if(c >= '0' && c <= '9')
    {
        printf("%c is a digit", c);
    }
    else
    {
        printf("%c is NOT a digit.", c);
    }
    return 0;
    /*
    use # include<ctype.h>
    if(isdigit(c))
    {
        printf("%c is a digit", c);
    }
    else
    {
        printf("%c is NOT a digit.", c);
    }
    */
}