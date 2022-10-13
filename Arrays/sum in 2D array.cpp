#include<bits/stdc++.h>
using namespace std;
int main(){
  int arr[100][100],n,m,sum,sum1,max=0,max1=0,row,col;
  cout<<"enter the no of rows and colums: ";
  cin>>n>>m;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cin>>arr[i][j];
    }
    
  }
  // row wise sum
  for (int i = 0; i < n; i++)
  {
    sum=0;
    for (int j = 0; j < m; j++)
    {
      sum=sum+arr[i][j];
    }
    if (sum>max)
    {
      max=sum;
      row=i;
    }
    
  }
  // colum wise sum
  for (int i = 0; i < m; i++)
  {
     sum1=0;
    for (int j = 0; j <n; j++)
    {
        sum1=sum1+arr[j][i];
    }
    if (sum1>max1)
    {
      max1=sum1;
      col=i;
    }
  }
  // printing max sum of row or colum
  if (max1>max)
    cout<<"colum "<<col<<" "<<max1;
  else
    cout<<"row "<<row<<" "<<max;
  
  return 0;
}