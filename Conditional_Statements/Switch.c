# include<stdio.h>

int main(void)
{
    int a;
    printf("Enter a number (1-7): ");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        printf("monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("Sunday");
        break;    
    default:
        printf("There are only 7 days");
        break;
    }
    return 0;
}