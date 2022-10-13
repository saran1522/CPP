#include<bits/stdc++.h>
using namespace std;
// ************linear search*************
/*if given number present in array then it should print the 
  address(index) of that variable  if not present then it should print -1*/
int main(){

    int n, index=0, x=1, test_case, num;
    bool b=true;
    cout<<"enter test cases"<<endl;
    cin>>test_case;
    while(x<=test_case)
    {
      cout<<"enter the size of array"<<endl;
      cin>>n;
      int arr[n];
      cout<<"enter the variables"<<endl;
         for (int i=0; i < n; i++)
         {
              cin>>arr[i];
         }
      cout<<"enter the number for linear search"<<endl;
      cin>>num;
    for (int i=0; i < n; i++)
    {
        if(num==arr[i])
        {
        cout<<"the address of variable is "<<i<<endl;
        b=false;
        break;
        }
    }
     if(b==true)
        cout<<-1<<endl;
        x++;
    }
    return 0;
}