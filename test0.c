#include <stdio.h>

int main()
{
    int n, n0, n1;
    printf("Enter 3 numbers:\n");
    scanf("%d%d%d", &n, &n0, &n1);
    printf("The greatest number is: %d", ((n > n0) ? ((n > n1) ? n : n1) : ((n0 > n1) ? n0 : n1)));
    return 0;
}