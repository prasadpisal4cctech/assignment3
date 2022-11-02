//4.Write a program to accept 5 digit integer N and calculate the sum of its first and fifth digit.
#include <iostream>
using namespace std;
int main()
{
    int N, i = 0, temp, firstdigit, fifthdigit, org, sum;
    cout << "Enter 5 digit Number" << endl;
    cin >> N;
    temp = N;
    org = N;
    if (temp > 0)
    {
        while (temp != 0)
        {
            temp = temp / 10;
            i++;
        }
        if (i != 5)
        {
            cout << "Please enter 5 digit number" << endl;
            cin >> N;
            org = N;
        }
    }
    fifthdigit = org % 10; // Here fifth digit is last digit
    while (N >= 10)
    {
        N = N / 10;
    }
    firstdigit = N;
    sum = firstdigit + fifthdigit;
    cout << "Sum of first and fifth digit=" << firstdigit << "+" << fifthdigit << "=" << sum;
}
