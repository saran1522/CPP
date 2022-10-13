#include<iostream>
#include<iomanip>
using namespace std; 
// *********all indexes of an element**********
void search(int arr[], int n, int x)//,int arr1[])
{
  static int count =0,m=n--;//,i=0;
  if(count==m)
     return;
  if(arr[0]==x)
    cout<<count<<" ";
  count++;
  search(arr+1,n-1,x);//,arr1); 
}
int main()
{
  int n,x;
  cin>>n;
  int arr[n];//,arr1[n];
  for(int i=0; i<n; i++)
     cin>>arr[i];
  cin>>x;
  search(arr,n,x);
}