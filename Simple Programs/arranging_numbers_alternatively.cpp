#include<bits/stdc++.h>
using namespace std;
// ************arranging numbers alternatively, if(input=5), array= 1 3 5 4 2***************
// approach 1
int main(){
    int n, index;
    cout<<"enter size of array"<<endl;
    cin>>n;
    int arr[n];
    index=(n-1)/2;
    for (int i = 0; i <= index; i++)
    {
       static int val=1;
       arr[i]=val;
       cout<<arr[i]<<" ";
       val=val+2;
    }
    for (int i = index+1; i < n; i++)
    {
       if(n%2==0)
       {
           static int val=n;
           arr[i]=val;
           cout<<arr[i]<<" ";
           val=val-2;
       }
       if(n%2!=0)
       {
           static int val=n-1;
           arr[i]=val;
           cout<<arr[i]<<" ";
           val=val-2;
       }
    }
  return 0;  
}

//approach 2
int main(){
    int val, n, e, s=0;
    cout<<"enter n"<<endl;
    cin>>n;
    int arr[n];
    e=n-1;
    for (int i = 1; i <=n; i++)
    {
        if(i%2!=0){
        arr[s]=i;
        s++;
        }
        else if(i%2==0)
        {
        arr[e]=i;
        e--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}