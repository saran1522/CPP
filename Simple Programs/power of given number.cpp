#include<iostream>
#include<iomanip>
using namespace std;
//******************power of number to another********************
int main()
{
    int i, j, m, k, n;
    cout<<"enter the base number"<<endl;
    cin>>i;
    cout<<"enter the power"<<endl;
    cin>>j;
    m=i;
    k=i;
    n=j;
    while (j!=1)
    {
         i= i*k;
         j--;
         
    }
    cout<<"the power "<<n<<" at base "<<m<<" is "<<i;
    return 0;
}