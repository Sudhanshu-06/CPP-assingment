#include<iostream>
using namespace std;
int main(){
    int arr[]={4,6,8,10,20,0,9,40};
    int size=8;
    int min_No=INT_MAX;

    for(int i=0; i<size; i++)
    {
        if(arr[i]<min_No)
        {
            min_No=arr[i];
        }
    }
    cout<<"minimum no is: "<<min_No <<endl;

    return 0;

}
