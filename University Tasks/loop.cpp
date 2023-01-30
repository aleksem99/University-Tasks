#include <iostream>

using namespace std;
//  A program that takes in integers until their sum is greater than or equal to a given number M, and outputs the sequence number of the number closest to M
int main()
{
    int M;
    cout << "Enter a number M: "   cin >> M;

    int sum = 0;
    int count = 0;
    int closest = 0;
    int difference = M;
    int num;

    while (sum < M)
    {
        count++;
        cout << "Enter integer " << count &#8203;`oaicite:{"index":1,"invalid_reason":"Malformed citation << \": \";\n        cin >>"}`&#8203; num;
        sum += num;

        if (abs(M - sum) < difference)
        {
            closest = count;
            difference = abs(M - sum);
        }
    }

    cout << "The closest number to M is at position " << closest << endl;

    return 0;
}