#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int x1, y1, x2, y2;
    double dx, dy, distance;

    scanf("%d %d %d %d", &x1, &y1, &x2, &y2); // Reading coordinates from the input stream
    dx = x2 - x1; // Calculation of the coordinate difference along the axis x
    dy = y2 - y1; // Calculation of the coordinate difference along the axis y

    double dxSquared = pow(dx, 2); // Calculation of squares of coordinate differences x
    double dySquared = pow(dy, 2); // Calculation of squares of coordinate differences y
    double sumOfSquares = dxSquared + dySquared; // Calculation of the sum of the squares of the coordinate differences
    distance = sqrt(sumOfSquares); // Calculate the length of the vector
    printf("%.6lf\n", distance);     // Output the result
    system("pause");//cmd not closing
    return 0;
}
