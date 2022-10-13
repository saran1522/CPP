#include<bits/stdc++.h>
using namespace std;
// **********replacing given character of string************
int main()
{
    char a[10], re_from, re_to;
    int n=0;
    cout<<"enter the input"<<endl;
    cin>>a;
    cout<<"enter interchanging letters"<<endl;
    cin>>re_from>>re_to;
    for (int i = 0; a[i]!='\0'; i++)
    {
        n++;
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i]==re_from)
        {
            a[i]=re_to;
        }
        
    }
    cout<<a;
    return 0;
}