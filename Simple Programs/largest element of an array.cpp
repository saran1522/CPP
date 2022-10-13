#include<bits/stdc++.h>
using namespace std;
// **************largest variable**************
int main(){
    int n;
    cout<<"enter the size of array"<<endl; // size means number of variables
    cin>>n;
    int input[n];
    cout<<"enter variables :";
    for(int i=0; i<n; i++){
        cin>>input[i];
    }
    int max=INT_MIN;
    for(int i=0; i<n; i++){
        if(input[i]>max)
           max=input[i];
    }
    cout<<max<<" is largest variable";
}