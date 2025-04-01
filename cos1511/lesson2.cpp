// this is a short recap of lesson 2
// Lesson 2: Integers
#include <iostream>

using namespace std;

int main()
{
    // Activity 2.a: the product of 1 to 5 is 120
    int prod1 = 1 * 2 * 3 * 4 * 5;
    cout << "The product of 1 to 5 is " + std::to_string(prod1) << endl;

    //  Subactivity 2.a.ii (my way)
    int prod2 = 371 * 194;
    cout << "The product of 371 * 194 is " + std::to_string(prod2)  << endl;

    // alternative solution
    cout << "The product of 5 * 6 is " << 5 * 6 << endl;

    // Activity 2.b: write the expressions to perform the calc
    // (i) The product of 12 and 23 plus the product of 34 and 45
    int prod4 = 12 * 23;
    int prod5 = 34 * 45;
    cout << "The product of 12 and 23 plus the product of 34 and 45 is " + std::to_string(prod4 + prod5) << endl;

    //  (ii) 4 times the sum of 5 and 6
    int prod6 = 4 * (5 + 6);
    cout << "4 times the sum of 5 and 6 is " + std::to_string(prod6) << endl;

    //  (iii) The difference between 543 and 23
    int diff1 = 543 - 23;
    cout << "The difference between 543 and 23 is " + std::to_string(diff1) << endl;

    //  (iv) The difference between 234 and 543
    cout << "The difference between 234 and 543 is " << 234 - 543 << endl;

    // (v) The quotient of 30 and 3 (i.e. 30 divided by 3)
    cout << "The quotient of 30 and 3 is " << 30/3 << endl;

    // (vi) The quotient of 20 and 3
    cout << "The quotient of 20 and 3 is " << 20/3 << endl;

    // (vii) The quotient of 10 and 3
    cout << "The quotient of 10 and 3 is " << 10/3 << endl;

    // (viii) The quotient of the sum of 357 and 468 and the product of -19 and 28
    cout << "The quotient of 357 and 468 is " << -1 + (23 /-4) + 56 << " and the product of -19 and 28 is " << -19 * 28 << endl;

    // Exercise 2.2: Write a program that produces the following output:
    cout << "There are 60 seconds in a minute." << endl;
    cout << "There are " << 60 * 60 << " seconds in an hour." << endl;
    cout << "There are " << 60 * 60 * 24 << " seconds in a day." << endl;
    cout << "There are " << 60 * 60 * 24 * 365 << " seconds in a year." << endl;

    //  Exercise 2.3
    /* Write a program to calculate the remainder of 234 divided by 13. Remember that the / operator throws
    away the remainder. Hint: divide 234 by 13 and then multiply it by 13 again. The di erence between 234
    and the result of this will be the remainder. */
    int q = 234/13;
    int p = q * 13;
    int remainder = 234 - p;
    cout << "The remainder of 234 divided by 13 is " << 234%13 << " or " + std::to_string(remainder) << endl;
    return 0;
}
