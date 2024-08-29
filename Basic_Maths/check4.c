// WAP to print the smallest number
#include <stdio.h>

int main() 
{
    int n, i;
    float num, smallest;

    // Ask the user for the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Check if the user provided a valid positive number of elements
    if (n <= 0) 
    {
        printf("Please enter a positive number of elements.\n");
        return 1; // Exit the program with an error code
    }

    // Ask the user to input the first number
    printf("Enter number 1: ");
    scanf("%f", &smallest);

    // Loop through the remaining numbers
    for (i = 2; i <= n; i++) 
    {
        printf("Enter number %d: ", i);
        scanf("%f", &num);

        // Check if the current number is smaller than the smallest
        if (num < smallest) {
            smallest = num;
        }
    }

    // Print the smallest number
    printf("The smallest number is: %.2f\n", smallest);

    return 0; // Exit the program
}