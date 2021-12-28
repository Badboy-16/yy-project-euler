/**
 * @file problem9.c
 * @author Yang Yunyi (yunyiyang@ln.hk)
 * @brief Project Euler Problem 9 - Special Pythagorean triplet
 * 
 * A Pythagorean triplet is a set of three natural numbers, a < b < c, for
 * which,
 * 
 * a^2 + b^2 = c^2
 * 
 * For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.
 * 
 * There exists exactly one Pythagorean triplet for which a + b + c = 1000.
 * Find the product abc.
 * 
 * @date 2021-12-27
 * 
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

int sq(int num);

int main()
{
    for (int a = 1; a <= 1000; a++) {
        for (int b = a + 1; b <= 1000; b++) {
            for (int c = b + 1; c <= 1000; c++) {
                if (a + b + c == 1000 && sq(a) + sq(b) == sq(c)) {
                    printf("%i", a * b * c);
                }
            }
        }
    }
}

/**
 * @brief Square an integer and return the result.
 * 
 * @param i the integer to be squared
 * @return int the squared result
 */
int sq(int i)
{
    return i * i;
}
