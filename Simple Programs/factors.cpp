#include<iostream>
#include<iomanip>
using namespace std;   
//***********factors of a number************
int main(){
    int num;
    cout<<"enter the number whos factor you want"<<endl;
    cin>>num;
    for (int i = 1; i <=num; i++)
    {
        if (num%i==0)
        {
            cout<<i<<" ";
        }   
    }
    return 0;
}