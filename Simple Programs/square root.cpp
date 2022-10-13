#include<bits/stdc++.h>
using namespace std;
// *************square root without using sqrt()***************
int main(){
    int num;
    cout<<"enter the number which's square root you want"<<endl;
    cin>>num;
    for(int i=1; i<=num; i++)
    {
        if(i*i==num)
        {
           cout<<"square roor is "<<i;
           break;
        }
    }
    return 0;
}