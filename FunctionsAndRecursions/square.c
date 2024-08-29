# include<stdio.h>
# include<math.h>

float square(int n);
float cube(int n);

int main(void)
{
    int n;
    printf("Enter a number: \n");
    scanf("%d", &n);
    printf("The square of the number is: %f\n", square(n));
    printf("The cube of the number is: %f\n", cube(n));
}

float square(int n)
{
    return pow(n,2);
}

float cube(int n)
{
    return pow(n,3);
}