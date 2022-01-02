/**
 * @file problem10.c
 * @author Yang Yunyi (yunyiyang@ln.hk)
 * @brief Project Euler Problem 10 - Summation of primes
 * 
 * The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
 * 
 * Find the sum of all the primes below two million.
 * 
 * @date 2022-01-02
 * 
 * @copyright Copyright (c) 2022 Yang Yunyi
 * 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#include <stdio.h>
#include <stdbool.h>

bool isprime(unsigned int i);

int main() {
    long int sum = 0;
    const long int limit = 2000000;

    for (long int i = 2; i < limit; ++i) {
        if (isprime(i) == true) {
            sum += i;
        }
    }

    printf("%ld", sum);
}

bool isprime(unsigned int i) {
    if (i == 0 || i == 1) {
        return false;
    } else if (i == 2) {
        return true;
    } else {
        for (int j = 2; j <= i - 1; ++j) {
            if (i % j == 0) {
                return false;
            }
        }
        return true;
    }
}
