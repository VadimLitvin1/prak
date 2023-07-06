 #include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

// Function to calculate the factorial of a number
int factorial(int n) {
    if (n <= 1)
        return 1;
    else
        return n * factorial(n - 1);
}
// Function to count the number of anagrams of a word
int countAnagrams(char word[]) {
    int length = strlen(word);
    int frequency[26] = {0}; // Array to store the frequency of each character
    // Calculate the frequency of each character in the word
    for (int i = 0; i < length; i++) {
        if (word[i] >= 'a' && word[i] <= 'z')
            frequency[word[i] - 'a']++;
    }

    int denominator = 1;    // Calculate the denominator for the number of anagrams
    // It is the product of factorials of frequencies greater than 1
    for (int i = 0; i < 26; i++) {
        if (frequency[i] > 1)
            denominator *= factorial(frequency[i]);
    }
    int numerator = factorial(length); // Calculate the numerator for the number of anagrams
    int anagramCount = numerator / denominator; // Calculate the number of anagrams
    return anagramCount;}
int main() {
    char word[15];
    printf("Enter a word: ");
    scanf("%s", word);
    int anagramCount = countAnagrams(word); // Count the number of anagrams
    printf("Number of anagrams: %d\n", anagramCount);
    system("pause"); // cmd not closing

    return 0;
}
