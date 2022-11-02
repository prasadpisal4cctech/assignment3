//6.Accept cost price(CP) and Selling price(SP) of an item. Calculate the ammount of PROFIT/LOSS made by the seller and print result.
#include<iostream>
using namespace std;
int main()
{
    float cp,sp,p,l;
    cout<<"Enter a Cost price of product:";
    cin>>cp;

    cout<<"Enter a Selling price of product:";

    cin>>sp;
    p=sp-cp;
    l=cp-sp;
    if (sp>cp)
    {
        cout<<"Profit for product is:"<<p;
    }
    else{
        cout<<"Loss for product is:"<<l;
    }
    
return 0;
}