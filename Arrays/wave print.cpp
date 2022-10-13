#include<bits/stdc++.h>
using namespace std;
int main(){
  int arr[100][100],n,m;
  cout<<"enter the no of rows and colums: ";
  cin>>n>>m;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cin>>arr[i][j];
    }
    
  }
  cout<<endl;
 int i=0,j=0;
 for(int j=0; j<m; j++)
 {
     if (j%2==0)
     {
     i=0;
     while (i<n)
     {
        cout<<arr[i][j]<<" ";
        i++;
     }
     }
     else
     {
         i=n-1;
         while(i>=0)
         {
         cout<<arr[i][j]<<" ";
         i--;
         }
     }
     cout<<endl;
     }
  return 0;
 }
 