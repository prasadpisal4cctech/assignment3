//3.Write a program to accept an integer N and generate an integer M which is formed by reversing the digits of N. Please note N can have maximum 5 digits. Print the numbers N and M. Compare N with M and print the result.
#include <iostream>
using namespace std;
int main()
{
    int N, reverse = 0, r, i = 0, temp, M, org;
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
            while (i != 5)
            {
                cout << "Please enter 5 digit number" << endl;
                cin >> N;
                org = N;
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
        reverse = reverse * 10 + r;
        N = N / 10;
    }

    cout << "N=" << org << endl;
    cout << "M=" << reverse << endl;
    M = reverse;
    N = org;
    if (M > N)
    {
        cout << "M is greater than N" << endl;
    }
    else
    {
        cout << "N is greater than M";
    }

    return 0;
}