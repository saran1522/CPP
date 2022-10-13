#include<iostream>
#include<iomanip>
using namespace std;     
// *************reverse of a number***************
int main(){
    int num, n, m=0;
    cout<<"enter the number you want to reverse"<<endl;
    cin>>num;
    while (num!=0)
    {
        n=num%10;
        num=num/10;
        m=(m*10)+(n*10);
        if (num<10)
        {
          m=m+num;
          num=0;
        }
    }
    cout<<"the reversed number is "<<m<<endl;
    return 0;
}