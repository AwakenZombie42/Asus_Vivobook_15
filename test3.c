// 1+ 1/2! + 1/3! + 1/4!..... till n
// not right
#include <stdio.h>
int main()
{
    int n;
    float f = 1, sum = 0;
    printf("Enter number of terms to get the sum of series:\n");
    scanf("%d", &n);
    for(int i = 0; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            f = f * j;
        }
        sum += 1/f;
    }
    printf("The sum of series is %f.\n", sum);
    return 0;
}