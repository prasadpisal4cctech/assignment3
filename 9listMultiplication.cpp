//9.Write a program to accept a list L1 of N integers. Accept integer M. Multiply each integer in the list by M and generate a new list L2. Print the lists L1 and L2.
#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

void printlist(list<int> v)
{
    for (list<int>::iterator itr = v.begin(); itr != v.end(); itr++)
    {
        cout << *itr << " ";
        
    }
}
int main()
{
    int n;
    cout << "enter size of list ";
    cin >> n;

    int a, m;
    cout << "Enter number to multiply the list1:";
    cin >> m;
    cout << "enter numbers in the list1:";

    list<int> v1;
    list<int> v2;

    for (int i = 0; i < n; i++)

    {

        cin >> a;
        v1.push_back(a);
        v2.push_back(a * m);
    }

    cout << "List1= ";
    printlist(v1);
    cout << endl;
    cout << "List2= ";
    printlist(v2);
    cout << endl;
}