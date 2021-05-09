// Including libraries
#include <cs50.h>
#include <stdio.h>

// Prompt the user to give valid inputs
int start(void);
int end(int x);

int main(void)
{
    // Prompt the user for the inputs:
    int a = start();
    int b = end(a);

    // Calculate the year requied
    int n = 0;

    while (a < b)
    {
        a = a + (a / 3) - (a / 4);
        n++;
    }

    // Print the number of years
    printf("Years: %i", n);
}






int start(void)
{
    int x;
    do
    {
        x = get_int("Start size: ");
    }
    while (x < 9);
    return x;

}


int end(int x)
{
    int y;
    do
    {
        y = get_int("End size: ");
    }
    while (y < x);
    return y;
}