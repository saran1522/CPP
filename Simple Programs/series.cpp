#include<iostream>
#include<iomanip>
using namespace std;   
// ************series of 3n+2(not multiple of 4)****************
int main(){
    int n, a, count=1;
    cout<<"enter n"<<endl;
    cin>>n;
    for(int i=1; count<=n; i++)
    {
        a=3*i+2;
        if(a%4!=0){
            cout<<a<<" ";
            count++;
        }
    }
    return 0;
}