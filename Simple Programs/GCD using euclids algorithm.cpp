#include<bits/stdc++.h>
using namespace std;
// ************GCD using euclid's algorithm**************
int main()
{
 int a, b;
 cout<<"enter the numbers"<<endl;
 cin>>a>>b;
 while (a!=b)
 {
     if (a>b)
      a=a-b;
     else
      b=b-a;
 }
     cout<<a;
     return 0;
}S