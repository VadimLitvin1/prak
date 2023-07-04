#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n; //variable n
    printf("Enter a natural number n (1 < n < 150): ");
    scanf("%d", &n);

    if (n <= 1 || n >= 150) { //we create frames
        printf("Invalid value of n. Enter a number within the range 1 and 150.\n");
        return 1;}

    int count = 0; //counter of equal divisors
    for (int m = 1; m <= n; m++) { // enumeration of all possible values ​​of m from 1 to n
        if (n % m == n / m) { // check if m is an even divisor of n
            count++; } } //if so, we increase the counter by 1
    printf("The number of equal divisors of a number %d: %d\n", n, count); //we output information
      system("pause");//cmd not closing
    return 0;
}

