// 12.Write a program to accept number of circles N and radius and coordinates of center (x,y) for each circle. Select appropriate data structure and explain why you chose it. Arrange the circles in increasing order of their area and print all the data of each circle.
#include <iostream>
#include <map>
using namespace std;
class circle

{
    double radius, area;

    float x, y;

public:
    circle(float x, float y, double radius)
    {
        this->radius = radius;
        this->x = x;
        this->y = y;
        this->area = 3.14 * radius * radius;
    }
    double getradius()
    {
        return radius;
    }
    double getarea()
    {
        return area;
    }
    float getx()
    {
        return x;
    }
    float gety()
    {
        return y;
    }
};

void printmap(map<double, circle> m)
{
    map<double, circle>::iterator itr;
    for (itr = m.begin(); itr != m.end(); ++itr)
    {
        cout<<"Area of circle:" << itr->first << " "<<endl;
        cout <<"Radius of circle:"<< itr->second.getradius() << " "<<endl;
        cout <<"Point x="<< itr->second.getx() << " "<<endl;
        cout <<"Point y="<< itr->second.gety() << " "<<endl;
        cout<<"-------------------------------------------------------------------------"<<endl;
    }
}
int main()
{
    map<double, circle> data;

    int N;
    double r;
    float x, y;

    cout << "Enter number of circles you want:" << endl;
    cin >> N;
    for (int i = 1; i <= N; i++)
    {

        cout << "Enter radius of " << i << " circle:" << endl;
        cin >> r;

        cout << "Enter coordinates of center (x,y) of " << i << " circle:" << endl;
        cin >> x >> y;
        circle c(x, y, r);
        data.insert({c.getarea(), c});
    }
    printmap(data);

    return 0;
}