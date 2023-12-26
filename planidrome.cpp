#include<bits/stdc++.h>
using namespace std;

int main()
{
    int l,u;
    cin>> l >> u;

    for(int i=1; i<=u; i++){
        int temp=i;
        int r=0;

        while(temp>0){
            r=(r*10) +(temp%10);
            temp/=10;
        }
        if(i==r){
            cout<< i << " ";
        }

    }
    return 0;
}
