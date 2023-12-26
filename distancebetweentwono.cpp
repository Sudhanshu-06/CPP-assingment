#include<bits/stdc++.h>
using namespace std;
int main(){
    int x1,x2,x3,y1,y2,y3, sum=0;

    cin>>x1>>y1;
    cin>>x2>>y2;
    cin>>x3>>y3;

    sum+= sqrt((pow((x2-x1),2)) + pow((y2-y1),2));
    sum+= sqrt((pow((x3-x2),2)) + pow((y3-y2),2));
    sum+= sqrt((pow((x1-x3),2)) + pow((y1-y3),2));

        cout<<sum;

    return 0;

}
