#include<bits/stdc++.h>
using namespace std;
// *********************swaping 3 numbers*****************
int main()
{
    int a, b,c;
    cout<<"enter 3 numbers"<<endl;
    cin>>a>>b>>c;
    a=a+c;
    b=b+c;
    c=a-c; //c=a;
    a=a-c;
    a=b-a; //a=b
    b=b-a; //b=c
    cout<<"values after swapping : "<<a<<" "<<b<<" "<<c;
    return 0;
} 