/** 
 * Find the difference between the sum of the squares of the first one hundred
 * natural numbers and the square of the sum.
 */

#include <stdio.h>

int main()
{
    long int sumOfSquares = 0;

    int sum = 0;
    long int squareOfSum;

    long int diff;

    for (int i = 1; i <= 100; i++) {
        sumOfSquares += i * i;
    }

    for (int j = 1; j <= 100; j++) {
        sum += j;
    }
    squareOfSum = sum * sum;

    diff = sumOfSquares - squareOfSum;

    if (diff < 0) {
        diff = -diff;
    }

    printf("%ld\n", diff);
    return 0;
}
