/**
 * By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see
 * that the 6th prime is 13.
 * 
 * What is the 10 001st prime number?
 */

#include <stdio.h>
#include <stdbool.h>

bool isPrime(unsigned long int num)
{
    if (num == 2) {
        return 1;
    } else if (num == 1 || num == 0) {
        return 0;
    } else {
        for (int i = 2; i < num; i++) {
            if (num % i == 0) {
                return 0;
            }
        }
        return 1;
    }
}

int main()
{
    int count = 0;
    long int target;
    for (int i = 2; count < 10001; i++) {
        if (isPrime(i) == 1) {
            ++count;
        }
        target = i;
    }
    printf("%ld\n", target);
    return 0;
}
