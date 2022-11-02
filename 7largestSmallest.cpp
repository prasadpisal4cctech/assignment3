//7.Write a program to a accept a list of N integers. Find the largest and the smallest number in the list and their respective positions in the list.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cout << "enter size of list ";
    cin >> n;
    int a;
    cout << "enter numbers in the list:";
    vector<int> v;
    for (int i = 0; i < n; i++)
    {

        cin >> a;
        v.push_back(a);
    }
    for (vector<int>::iterator itr = v.begin(); itr != v.end(); itr++)
    {
         cout << *itr << " " ;
         
    }

    cout << "Largest integer= " << *max_element(v.begin(), v.end()) << endl;
    cout<<"position of largest integer is= "<<max_element(v.begin(),v.end())-v.begin()+1<<endl;
    cout << "Smallest integer= " << *min_element(v.begin(), v.end())<<endl;
    cout<<"position of smallest integer is= "<<min_element(v.begin(),v.end())-v.begin()+1<<endl;
    
}