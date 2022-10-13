#include<bits/stdc++.h>
using namespace std;
// **********sum of elements in an array****************
int main(){
    int n, sum=0;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int array[n];
    for (int i = 0; i <n; i++)
    {
        cin>>array[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        sum=sum+array[i];
    }
    cout<<"the sum is "<<sum;
}