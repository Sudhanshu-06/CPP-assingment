
#include <iostream>
#include<string>
using namespace std;

int main() {
  string s1="Ryaan";
  string s2="Nagesh";
  int count=0;
  for(int i=0;i<s1.size();i++){
      for(int j=0;j<s2.size();j++){
          if(s1[i]==s2[j] and i==j){
              count+=2;
          }
          if(s1[i]==s2[j] and i!=j){
              count++;
          }
      }
  }

cout<<count;
    return 0;
}

