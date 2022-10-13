#include<bits/stdc++.h>
using namespace std; 
// **************frequency of elements in an array*****************
int main(){
     int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int arr[n], arr1[n];
    cout<<"enter the elements of array"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i <n; i++)
    {
        int count=0;
        for (int j = 0; j<n; j++)
        {
           if (arr[i]==arr[j])
           {
               count++;
           }
        }
        arr1[i]=count;
        }
    for (int i = 0; i <n; i++)
    {
        cout<<arr1[i]<<" ";
    }
    return 0;
}