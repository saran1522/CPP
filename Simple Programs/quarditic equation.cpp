#include<bits/stdc++.h>
using namespace std;
// ******************roots of quarditic equation*******************
int main(){
    int a, b, c, k, d;
    float root1=0, root2=0;
    cout<<"enter a, b and c"<<endl;
    cin>>a>>b>>c;
    d=(b*b)-(4*a*c);
    if(d>=0){
    root1=(-b+sqrt(d))/(2*a);
    root2=(-b-sqrt(d))/(2*a);
    cout<<"the roots are "<<root1<<" "<<root2;
    }
    else{
        cout<<"roots are imaginary";
    }
    return 0;
}
