/**
 * The prime factors of 13195 are 5, 7, 13 and 29.
 * What is the largest prime factor of the number 600851475143 ?
 */

#include <stdio.h>
#include <stdbool.h>

bool isPrime(long long int num)
{
    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main()
{
    long long int originNum = 600851475143;
    long long int targetNum = 600851475143;
    int largestPrime = 0;

    for (int primeTest = 2; primeTest < targetNum; primeTest++) {
        if (isPrime(targetNum) == true) {
            if (targetNum > largestPrime) {
                largestPrime = targetNum;
                break;
            }
        } else if (isPrime(primeTest) == true && targetNum % primeTest == 0) {
            targetNum /= primeTest;
            if (primeTest > largestPrime) {
                largestPrime = primeTest;
            }
            primeTest = 2;
        }
    }

    printf("The largest prime factor of the number ");
    printf("%lld is %d\n", originNum, largestPrime);

    return 0;
}
