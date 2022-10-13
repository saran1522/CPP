#include<bits/stdc++.h>
using namespace std;
// ***************decimal to binary******************
int main(){
    long long binum=0, i=1;
    int rem,c=0,n;
    cout<<"enter number"<<endl;
    cin>>n;
    while(n>0){
        rem=n%2;
        n=n/2;
        binum=binum+rem*i;
        i=i*10;
    }
    cout<<binum;
    return 0;
}