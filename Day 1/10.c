// Write a program for to check whether a given String is Palindrome or  not using recursion
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to check if a string is a palindrome recursively
int isPalindromeRecursive(char *str, int start, int end) {
    // Base case: if start index crosses or equals end index, it means the string is a palindrome
    if (start >= end)
        return 1;

    // Ignore non-alphanumeric characters by skipping them
    while (!isalnum(str[start]) && start < end)
        start++;
    while (!isalnum(str[end]) && start < end)
        end--;

    // Convert characters to lowercase for case-insensitive comparison
    char ch1 = tolower(str[start]);
    char ch2 = tolower(str[end]);

    // If characters at start and end indices are equal, check the substring between them
    if (ch1 == ch2)
        return isPalindromeRecursive(str, start + 1, end - 1);
    else
        return 0; // Not a palindrome
}

int main() {
    char str[100];

    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character from fgets
    if (str[strlen(str) - 1] == '\n')
        str[strlen(str) - 1] = '\0';

    if (isPalindromeRecursive(str, 0, strlen(str) - 1))
        printf("The string \"%s\" is a palindrome.\n", str);
    else
        printf("The string \"%s\" is not a palindrome.\n", str);

    return 0;
}
