//WAP to print the average of 3 numbers.
# include<stdio.h>

int main(void)
{
    float a,b,c;
    printf("Enter Three numbers:\n");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    printf("The average of Three numbers is: %f", (a+b+c)/3);
    return 0;
}