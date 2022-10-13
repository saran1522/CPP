#include<bits/stdc++.h>
using namespace std;
// ***************passing array to function**************
void fun(int input[], int n)
{
  for(int i=0; i<n; i++){
      cout<<input[i]<<" ";
  }
}
int main(){
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    int input[20];
    for (int i = 0; i < n; i++)
    {
        cin>>input[i]; 
    }
    fun(input, n);
}