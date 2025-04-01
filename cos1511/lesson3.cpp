// Lesson 3: Variables
#include <iostream>

using namespace std;

int main()
{
    // Activity 3.a
    int num1, num2;
    cout << "Enter the first number: " << endl;
    cin >> num1;

    cout << "Enter the second number: " << endl;
    cin >> num2;

    int quotient = num1 / num2;

    cout << "The quotient of " << num1 << " and " << num2 << " is " << quotient << endl;

    // subactivity 3.a.i
    // What happens?
    int age;
    cout << "Enter your age: ";
    cin >> age;
    cout << "That's a great age to be!" << endl;

    // subactivity 3.a.iii
    // this cout statement displays the age that the user inputs into the cin statement
    cout << age << " is a great age to be!" << endl;

    // subactivity 3.a.v
    int yourCurrentAge;
    cout << "Enter your age: " << endl;
    cin >> yourCurrentAge;

    // calculation for next age should be in this scope after the cin has been processed
    int nextAge = yourCurrentAge + 1;
    cout << "You will be " << nextAge << " on your next birthday!" << endl;


    // subactivity 3.a.vi
    int yourMomsAge;
    cout << "Enter your mom's age and your age: " << endl;

    // i am reusing the same variable name... but it will still prompt the user to re-enter yourCurrentAge so might as well have a different variable name
    cin >> yourMomsAge >> yourCurrentAge;
    int pastMomsAge = yourMomsAge - yourCurrentAge;
    cout << "Your mom was " << pastMomsAge << " years old when you were born." << endl;


    // Activity 3.b
    int num3, num4;
    cout << "Enter two numbers: " << endl;
    cin >> num3 >> num4;
    int remainder = num3 % num4;
    cout << "The remainder of " << num3 << " divided by " << num4 << " is " << remainder << endl;


    // subactivity 3.b.i
    cout << "The remainder of " << num3 << " divided by " << num4;
    cout << " is " << num3 - num3 / num4 * num4 << endl;


    // subactivity 3.b.ii
    // Inputs a time and a number of hours
    // Calculates new time after number of hours has elapsed
    int time, hours;
    cout << "Enter the time now (only the hours 0... 23): ";
    cin >> time;
    cout << "Enter a number of hours: ";
    cin >> hours;
    cout << "In " << hours << " hours the time will be ";
    cout << (time + hours) % 24 << endl;


    // Exercise 3.1
    // Write a program that inputs three values and displays them on a single line in reverse order.
    int val1, val2, val3;
    cout << "Enter three numbers: ";
    cin >> val1 >> val2 >> val3;
    cout << "The numbers in reverse order are: " << val3 << ", " << val2 << ", " << " and " << val1 << endl;


    // Exercise 3.2
    int x, y, z;
    cout << "Enter values for variables x, y and z:" << endl;
    cin >> x >> y >> z;
    cout << "x + y / z is " << x + y / z << endl;
    cout << "x % z is " << x % z << endl;
    cout << "y * z / x + 2 is " << y * z / x + 2 << endl;
    cout << "y * (z / x + 2) is " << y * (z / x + 2) << endl;


    // Exercise 3.3
    /*  Lorraine inherited her grandmothers old cookbook, but all the oven temperatures are given in Fahrenheit,
        and her oven is only calibrated in Celsius. Write a program to help her. The formula for converting from
        Fahrenheit to Celsius is  C = 5(F - 32)/9
    */
    int fahrenheit;
    cout << "Type the Fahrenheit value: " << endl;
    cin >> fahrenheit;
    int celcius = 5*(fahrenheit - 32)/9;
    cout << fahrenheit << "F is the same as " << celcius << "C." << endl;

    return 0;
}

