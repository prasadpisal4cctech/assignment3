//1.Write a program to accept an integer N and calculate the sum of its digits. Please note N can have maximum 5 digits.
#include <iostream>
using namespace std;
int main()
{
    int N, sum = 0, r, i = 0, temp;
    cout << "Enter 5 digit Number" << endl;
    cin >> N;
    temp = N;
    if (temp > 0)
    {
        while (temp != 0)
        {
            temp = temp / 10;
            i++;
        }
        if (i != 5)
        {
            while (i != 5)
            {
                cout << "Please enter 5 digit number" << endl;
                cin >> N;
                temp = N;
                i = 0;
                while (temp != 0)
                {
                    temp = temp / 10;
                    i++;
                }
            }
        }
    }
    while (N > 0)

    {

        r = N % 10;
        sum = sum + r;
        N = N / 10;
    }
    cout << "Sum of digits in the number are:" << sum;
    return 0;
}