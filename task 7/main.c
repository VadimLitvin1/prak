#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int findIntersectionPoints(int x1, int y1, int r1, int x2, int y2, int r2) { //input of axis parameters
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)); //calculation of the distance between the centers of 2 circles

    if (distance > r1 + r2 || distance < fabs(r1 - r2)) { //If the distance between the centers of the circles is greater than the sum
    //of their radii or less than the absolute difference of their radii, then the circles are not intersecting.
        return 0;
    } else if (distance == 0 && r1 == r2) {// If the distance between the centers of the circles is zero and their radii
    // are equal, then the circles are coinciding.
        return -1;
    } else if (distance == r1 + r2 || distance == fabs(r1 - r2)) { // If the distance between the centers of the circles is equal to the sum
//of their radii or the absolute difference of their radii, then the circles are intersecting at a single point.

        return 1;
    } else { //If none of the above conditions are met, the circles are intersecting at two points.

        return 2;
    }
}

int main() {
    int x1, y1, r1, x2, y2, r2;
    printf("Enter the coordinates and radius of the first circle (x1 y1 r1): ");
    scanf("%d %d %d", &x1, &y1, &r1);
    printf("Enter the coordinates and radius of the second circle (x2 y2 r2): ");
    scanf("%d %d %d", &x2, &y2, &r2);

    int intersectionPoints = findIntersectionPoints(x1, y1, r1, x2, y2, r2);
    printf("Number of intersection points: %d\n", intersectionPoints);
    system("pause"); //cmd not closing
    return 0;
}
