#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int p; //variable declaration
    printf("enter number p (p =< 30): "); //a message is displayed on the screen
    scanf("%d", &p);

    if (p <= 0 || p > 30) { //limit check
        printf("Inadmissible value of p. Enter the number from 1 to 30.\n");
        return 1;
    }

    int count = pow(2, p) - (p - 2); //checking where 3 identical numbers are not next to each other

    printf("Number of %d digit numbers where three identical digits are not next to each other: %d\n", p, count); //information output
    system("pause");//cmd not closing
    return 0;
}
