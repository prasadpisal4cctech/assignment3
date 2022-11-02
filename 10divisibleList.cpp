//10.Write a program to accept a list L1 of N integers. Accept integer D. Generate list L2 such that it contains only those integers from list L1 which are divisible by D. Calculate the size of list L2. Print the list L1, N, D, list L2 and its size.#include <iostream>
#include<iostream>
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
    int N;
    cout << "enter size of list ";
    cin >> N;

    int a, D;
    cout << "Enter number who divide list1 numbers   :";
    cin >> D;
    cout << "enter numbers in the list1:";

    list<int> v1;
    list<int> v2;

    for (int i = 0; i < N; i++)

    {

        cin >> a;
        v1.push_back(a);
        if (a%D==0)
        {
            v2.push_back(a);
        }
        
        
    }

    cout << "L1= ";
    printlist(v1);
    cout<<endl;

    cout<<"N="<<N<<endl;
    cout<<"D="<<D<<endl;
    cout << "L2= ";
    printlist(v2);
    cout << endl;
    cout<<"Size of L2="<<v2.size();
}