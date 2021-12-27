/**
 * @file problem4.c
 * @author Yang Yunyi (yunyiyang@ln.hk)
 * @brief Project Euler Problem 4 - Largest palindrome product
 * 
 * A palindromic number reads the same both ways. The largest palindrome
 * made from the product of two 2-digit numbers is 9009 = 91 × 99.
 * 
 * Find the largest palindrome made from the product of two 3-digit
 * numbers.
 * 
 * @date 2021-12-27
 * @copyright Copyright (c) 2021 Yang Yunyi
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

_Bool ispal(int num);
int revnum(int num);
int finddigits(int num);
int powof(int base, int ex);

int main()
{
    int max;
    int product;
    _Bool pal;

    for (int i = 100; i <= 999; i++) {
        for (int j = i; j <= 999; j++) {
            product = i * j;
            pal = ispal(product);
            if (pal == 1) {
                if (product >= max) {
                    max = product;
                }
            }
        }
    }

    printf("%d", max);
}

/**
 * @brief Check if an integer is a palindrome.
 * 
 * @param num the integer to be checked
 * @return _Bool whether the integer is a palindrome
 */
_Bool ispal(int num)
{
    int reverse = revnum(num);

    if (num == reverse) {
        return 1;
    } else {
        return 0;
    }
}

/**
 * @brief Reverse an integer. For example, revnum(1234) will return 4321.
 * 
 * @param num the integer to be reversed
 * @return int the reversed integer
 */
int revnum(int num)
{
    int ndigits = finddigits(num);
    int reverse = 0;
    int digit;
    int add;
    int ded;

    for (int i = ndigits - 1; i >= 0; i--) {
        digit = num / powof(10, i);
        add = digit * powof(10, ndigits - 1 - i);
        ded = digit * powof(10, i);
        reverse += add;
        num -= ded;
    }

    return reverse;
}

/**
 * @brief Find the number of digits in an integer
 * 
 * @param num the integer to be checked
 * @return int the number of digits in the integer
 */
int finddigits(int num)
{
    for (int i = 0;; i++) {
        if (num / (powof(10, i)) == 0) {
            return i;
        }
    }
}

/**
 * @brief Raise number to the power of another number.
 * 
 * @param base the base of the exponentiation
 * @param ex the exponent of the exponentiation
 * @return int the calculation result
 */
int powof(int base, int ex)
{
    int result = 1;

    for (int i = 0; i < ex; i++) {
        result *= base;
    }

    return result;
}
