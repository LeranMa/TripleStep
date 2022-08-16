/*
 * This program addresses the following problem from Gayle Laakmann McDowell's
 * CRACKING THE CODING INTERVIEW, SIXTH EDITION.
 *
 * ----------------------------------------------------------------------------
 * Triple Step: A child is running up a staircase with n steps and can hop 
 * either 1 step, 2 steps, or 3 steps at a time. Implement a method to count 
 * how many possible ways the child can run up the stairs.
 * ----------------------------------------------------------------------------
 *
 * Author: Leran Ma (leranmalm@hotmail.com)
 * Date:   11:29 AM, Tuesday, August 16, 2022
 */

#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Please enter n: ";
    cin >> n;

    int a = 1; // There's only one way to go up 1 stair.
    int b = 2; // There are two ways to go up 2 stairs.
    int c = 4; // There are four ways to go up 3 stairs.

    if ( n == 1 )
    {
        cout << a;
        return 0;
    }
    else if ( n == 2 )
    {
        cout << b;
        return 0;
    }
    else if ( n == 3 )
    {
        cout << c;
        return 0;
    }

    for (int i = 4; i <= n; ++i)
    {
        int temp = a + b + c;
        a = b;
        b = c;
        c = temp;
    }

    cout << c;
    
    return 0;
}
