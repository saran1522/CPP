#include<bits/stdc++.h>
using namespace std;
// **************binary string to decimal number**************
int main(){
    string str;
    int n, binary=0, increment=1;
    cout<<"enter the input string"<<endl;
    cin>>str;
    n=str.length();
    for (int i = n-1; i>=0; i--)
    {
        if (str[i]=='1')
        {
            binary=binary+increment;
        }
        increment=increment*2;
    }
    cout<<binary;
}