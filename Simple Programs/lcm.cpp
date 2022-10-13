#include<iostream>
#include<iomanip>
using namespace std;   
// ***************lcm of 2 numbers*****************
int main(){
    int n1, n2, lcm=1;
    cout<<"enter two numbers"<<endl;
    cin>>n1>>n2;
    for (int i = n1; i>=n1; i++)
    {
        if (i%n1==0&&i%n2==0)
        {
            lcm=i;
            break;
        }
    }   
     cout<<lcm;
     return 0;
}