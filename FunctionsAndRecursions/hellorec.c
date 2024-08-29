//Print Hello World! 5 times using recursion
/*
this is how I came up with the code not so
good, ChatGPT's and Shradha's are better they
are at the bottom as a comment
*/
# include<stdio.h>

void HW(int n);

int main(void)
{
    HW(5);
    return 0;
}

void HW(int n)
{
    if(n > 0)
    {
        printf("Hello World!\n");
    }
    else if(n == 0)
    {
        return;
    }
    HW(--n);
}
/*
=> ChatGPT

#include <stdio.h>

void HW(int n);

int main(void)
{
    HW(5);
    return 0;
}

void HW(int n)
{
    if (n > 0)
    {
        printf("Hello World!\n"); // Print "Hello World!" and a newline
        HW(n - 1); // Recursive call with n-1
    }
    // No need for the else if condition for n == 0; the if condition is sufficient
}

=> Shradha's

# include<stdio.h>

void HW(int n);

int main(void)
{
    HW(5);
    return 0;
}

void HW(int n)
{
    if(n == 0)
    {
        return;
    }
    printf("Hello World!\n");
    HW(n-1);
}
*/