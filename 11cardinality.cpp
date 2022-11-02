// 11.Write a program to accept cardinality of set A as N, and cardinality of set B as M. Then accept elements of set A and set B. Generate set C which is union of set A and set B, set D which is intersection set of set A and Set B. Print set A, B, C, D, Cardinality of set C, Cardinality of set D.
#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

void printSet(set<int> s)
{
    set<int>::iterator itr;
    for (itr = s.begin(); itr != s.end(); ++itr)
    {
        cout << *itr << " ";
    } cout << " size of set : " << s.size() << endl;
}
int main()
{
    int N, M, C, D;
    cout << "enter size of set A ";
    cin >> N;
    cout << "enter size of set B ";
    cin >> M;
    int a, b;
    cout << "Enter numbers in set A:";

    set<int> set_A;
    set<int> set_B;
    set<int> set_C;
    set<int> set_D;
    for (int i = 0; i < N; i++)
    {
        cin >> a;
        set_A.insert(a);
    }
    cout << "Enter numbers in set B:";
    for (int i = 0; i < M; i++)
    {
        cin >> b;
        set_B.insert(b);
    }
    cout << "Set A : ";printSet(set_A);
    cout << "Set B : ";printSet(set_B);
    cout << "Union of set A and set B : ";
    set_union(set_A.begin(),set_A.end(),set_B.begin(),set_B.end(),inserter(set_C,set_C.begin()));
    printSet(set_C);

    vector<int> vect;
    //vector<int> :: iterator ls,v_itr;

    cout << "Intersection of set A and set B : ";
    set_intersection(set_A.begin(),set_A.end(),set_B.begin(),set_B.end(),inserter(set_D,set_D.begin()));
    printSet(set_D);

    return 0;
}