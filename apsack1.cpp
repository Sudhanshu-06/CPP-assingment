#include<iostream>
#include<algorithm>
using namespace std;

struct Item
{
    public :
        int value;
        int weight;
};

bool sudhanshu(Item I1 , Item I2)
    {
        float p1 = I1.value/I1.weight ;
        float p2 = I2.value / I2.weight;

        return p1 > p2;
    }

int main()
{
    Item a[] = { {21,7} , {24,4}, {12,6} , {40,5}, {30, 6}};
    int n = 5 , wt = 20 , amount = 0;

    sort(a , a + n , sudhanshu);

    for(int i = 0 ; i<n ; i++)
    {
        if(a[i].weight <= wt)
        {
            wt = wt - a[i].weight;
            amount = amount + a[i].value;
        }
        else
        {
            amount = amount + (a[i].value/a[i].weight)*wt;
            break;
        }
    }

    cout<<"Final Amount = "<<amount<<endl;

    return 0;
}
