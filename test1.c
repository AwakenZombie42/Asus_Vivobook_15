#include <stdio.h>

int main()
{
    int n, m, s = 0;
    printf("Enter a 3 digit number:\n");
    scanf("%d", &n);
    while(n > 0)
    {
        m = n % 10;
        printf("%d\n", m);
        s += m;
        n = n / 10;
    }
    printf("The sum of the digits is: %d", s);
    return 0; 
}