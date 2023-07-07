#include <stdio.h>
#include <string.h>

int calculateSteps(int x, int y) {
    int steps = 0;

    if (x == y)  // Handle the special case when x is equal to y
        return 1;

    int diff = y - x;  // Calculate the absolute difference between x and y
    int numTwoSteps = diff / 2;     // Determine the number of 2-steps that can be taken
    int numOneSteps = diff % 2;     // Determine the number of 1-steps that can be taken

    steps = numTwoSteps + numOneSteps + 1;     // Calculate the total number of steps
    return steps;
}

int main() {
    int x, y;

    printf("Enter the value of x: "); // Get input values for x
    scanf("%d", &x);
    printf("Enter the value of y: "); // Get input values for y
    scanf("%d", &y);

    int minSteps = calculateSteps(x, y);   // Calculate the minimum number of steps

    printf("Minimum number of steps: %d\n", minSteps);     // Output the result
    system("pause"); // cmd not closing
    return 0;
}
