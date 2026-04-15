#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int n;
    int i;
    float sum = 0;

    // Check if value is given in command line
    if (argc > 1)
    {
        n = atoi(argv[1]);
    }
    else
    {
        printf("Enter value of n: ");
        scanf("%d", &n);
    }

    // Calculate the sum
    for (i = 1; i <= n; i++)
    {
        sum = sum + (float)i / (i + 4);
    }

    // Print the result
    printf("Sum = %f", sum);

    return 0;
}
