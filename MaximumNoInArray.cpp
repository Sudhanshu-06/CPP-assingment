#include<iostream>
using namespace std;
int main(){
    int arr[]={4,6,8,10,20,0,9,40};
    int size=8;
    int max_No=INT_MIN;

    for(int i=0; i<size; i++)
    {
        if(arr[i]>max_No)
        {
            max_No=arr[i];
        }
    }
    cout<<"maximum no is: "<<max_No <<endl;

    return 0;

}

