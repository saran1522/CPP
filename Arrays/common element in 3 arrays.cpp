#include<bits/stdc++.h>
using namespace std; 
// ***********common element in 3 given array***********
int main(){
     int arr1[20],arr2[20],arr3[20],n1,n2,n3,common=INT_MIN;
     cout<<"enter the size of array 1"<<endl;
     cin>>n1;
     cout<<"enter the elements of array 1"<<endl;
    for (int i = 0; i < n1; i++)
    {
        cin>>arr1[i];
    }
    cout<<"enter the size of array 2"<<endl;
    cin>>n2;
    cout<<"enter the elements of array 2"<<endl;
    for (int i = 0; i < n2; i++)
    {
        cin>>arr2[i];
    }
    cout<<"enter the size of array 3"<<endl;
    cin>>n3;
     cout<<"enter the elements of array 3"<<endl;
    for (int i = 0; i < n3; i++)
    {
        cin>>arr3[i];
    }
    for (int i = 0; i < n1; i++)
    {
        
      for (int j = 0; j<n2; j++)
      {
          if(common==arr1[i])
             break;
          if (arr1[i]==arr2[j])
          {
              common=arr1[i];
            for (int k = 0; k< n3; k++)
            {
              if (arr3[k]==common)
              {
               cout<<common<<" ";
               break;
              }
            }
          }
      }
    }  
 }