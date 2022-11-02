// 8.Write a program to accept a list of N integers. Accept integer K. Find the Kth smallest number in the list and its position.
#include <iostream>
#include <vector>
#include <algorithm>
#include <list>

using namespace std;

int main()
{
     int N,k;
    cout << "enter size of list ";
    cin >> N;
    int a;
    cout << "enter numbers in the list:";
    vector<int> v;
    int arr[N];
    int arr2[N];

    for (int i = 0; i < N; i++)
    {

        cin >> a;
        arr[i] = a;
        arr2[i] = a;
        v.push_back(a);
    }
    cout << "Enter kth number for smallest element :";
    cin >> k;
    int x = sizeof(arr2) / sizeof(arr2[0]);
    sort(arr2, arr2 + x);
    k = k - 1;
    
    int ans = arr2[k];
    for (int i = 0; i < N; i++)
    {
        if (arr[i] == ans)
        {
            cout << k+1 << " smallest integer=" << arr[i] << endl;
            cout << "Position of " << k+1 << "smallest integer=" << i + 1;
        }
    }
}