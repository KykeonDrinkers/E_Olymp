#include <stdio.h>
#include <string.h>

int calculateRemainder(int base, const char* number) {
    int remainder = 0;
    int len = strlen(number);

    // Iterate through each digit of the number
    for (int i = 0; i < len; i++) {
        // Convert the digit from char to integer
        int digit = number[i] - '0';

        // Update the remainder using modular arithmetic
        remainder = (remainder * base + digit) % (base - 1);
    }

    return remainder;
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int dataSetNumber, base;
        char number[10000001];

        // Read the input values for each test case
        scanf("%d %d %s", &dataSetNumber, &base, number);

        // Calculate the remainder
        int remainder = calculateRemainder(base, number);

        // Print the result
        printf("%d %d\n", dataSetNumber, remainder);
    }
return 0;
}
