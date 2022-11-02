//5.Write a program to accept a 5 digit integer N and then generates a number M by adding 1 to each digit.
#include <iostream>
using namespace std;
int main()
{
    int N, org, sum = 0, r=0, i = 0, temp, M;
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

    int ans = 0,reverse=0;
    while (N != 0)
    {

        M = N % 10;
        M = M + 1;
        if (M == 10)
        {
            M = 0;
        }
        ans = ans * 10 + M;
        N=N/10;

    }
    while (ans > 0)

    {
        r = ans % 10;
        reverse = reverse * 10 + r;
        ans = ans / 10;
    }
    cout<<"N:"<<org<<endl;
    cout<<"M:"<<reverse;

}
