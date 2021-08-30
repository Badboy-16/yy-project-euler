/**
 * 2520 is the smallest number that can be divided by each of the numbers from 1
 * to 10 without any remainder.
 * 
 * What is the smallest positive number that is evenly divisible by all of the
 * numbers from 1 to 20?
 */

#include <stdio.h>

int main()
{
    long int finalNum;
    for (long int num = 1;; num++) {
        for (int divisor = 1; divisor <= 20; divisor++) {
            if (num % divisor == 0) {
                if (divisor == 20) {
                    printf("%ld\n", num);
                    return 0;
                }
            } else {
                break;
            }
        }
    }
}
