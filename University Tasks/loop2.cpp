#include <iostream>

using namespace std;
// A program that finds the difference between the sum of numbers greater than 5 and the sum of numbers less than 5 of a given integer
int main()
{
    int num;
    cout << "Enter an integer: "  cin >> num;

    int greaterSum = 0;
    int lesserSum = 0;
    int digit;

    while (num > 0)
    {
        digit = num % 10;
        if (digit > 5)
        {
            greaterSum += digit;
        }
        else if (digit < 5)
        {
            lesserSum += digit;
        }
        num /= 10;
    }

    int difference = greaterSum - lesserSum;
    cout << "The difference between the sum of numbers greater than 5 and the sum of numbers less than 5 is: " << difference << endl;

    return 0;
}