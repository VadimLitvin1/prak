#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter the length of the sequence n: ");
    scanf("%d", &n);

    int dp[10001]; // An array to store the number of valid sequences
    dp[0] = 1;
    dp[1] = 2;
    dp[2] = 3;

    for (int i = 3; i <= n; i++) {  //calculates the number of valid sequences for each length from 3 to n
        dp[i] = (dp[i-1] + dp[i-2]) % 12345; //recurrence relation
    }
    printf("Enter the length of the sequence: %d\n", dp[n]); //the result is displayed
    system("pause");//cmd not closing
    return 0;
}
