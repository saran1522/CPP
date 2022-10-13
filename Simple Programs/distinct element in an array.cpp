#include<bits/stdc++.h>
using namespace std; 
// ********finding no. of distinct elements************
int main(){
     int count=0, n;
     bool index;
     cout<<"enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        index=true;
      for (int j = 0; j < i; j++)
      {
          if(arr[i]==arr[j])
          {
           index =false;
           break;    
          }
      }
       
      if(index==true)
      {
          count++;
      } 
    }   
    cout<<count;
 }