#include <stdio.h>

int main() {
    int n;
    int sum = 0;

    // Take the value of n from the user
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate the sum of the series
    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 0) {
            // If i is even, subtract i from the sum
            sum -= i;
        } else {
            // If i is odd, add i to the sum
            sum += i;
        }
    }

    // Display the result
    printf("Sum of the first %d terms of the series: %d\n", n, sum);

    return 0;
}