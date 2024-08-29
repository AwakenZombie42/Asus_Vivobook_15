# include<stdio.h>
# include<ctype.h>
int main(void)
{
    char a;
    printf("Enter a letter: ");
    scanf("%c", &a);
    if(isupper(a))
    {
        printf("Letter is in uppercase");
    }
    else
    {
        printf("Letter is in lowercase");
    }
    return 0;
    /*
    if(a >= 'A' && a <= 'Z')
    {
        printf("Letter is in uppercase");
    }
    else if(a >= 'a' && a <= 'z')
    {
        printf("Letter is in lowercase");
    }
    else 
    {
        printf("not a english letter");
    }
    */
}