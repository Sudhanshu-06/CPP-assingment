#include <iostream>

using namespace std;

int main()
{
    long long a,b;
    cin>>a>>b;
    unsigned long long lhs=(a+b)*(a+b)*(a+b);
    unsigned long long rhs=(a*a*a)+(b*b*b)+(3*a*b*b)+(3*a*a*b);

    cout<<lhs<<endl;
    cout<<rhs<<endl;
    if(lhs==rhs)
    cout<<"Verified"<<endl;
    else
    cout<<"Not Verified"<<endl;

    return 0;
}
