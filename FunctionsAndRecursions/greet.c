//Write a function that prints Namaste if user is Indian and Bonjour if the user is French
# include<stdio.h>

char IorF();
void printNamaste();
void printBonjour();

int main()
{
    char a;
    printf("Are you Indian or French (Enter I for Indian and F for French): \n");
    a = IorF();
    printf("\n");
    if(a == 'I' || a == 'i')
    {
        printNamaste();
    }
    else if(a == 'F' || a == 'f')
    {
        printBonjour();
    }
    else
    {
        printf("Invalid Input.\n");
    }
    printf("\n\n");
    return 0;
}
//for know if the user is Indian or French
char IorF()
{
    char c;
    scanf("%c", &c);
    return c;
}
//printing namaste
void printNamaste()
{
    printf("Namaste");
}
//printing bonjour
void printBonjour()
{
    printf("Bonjour");
}