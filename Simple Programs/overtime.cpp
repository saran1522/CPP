#include<iostream>
#include<iomanip>
using namespace std;
// ***************overtime of elployees***************
// employee-10, overtime- above 40 hours, rate-12/hour of overtime
int main(){
    int i=1, hours, overt, pay;
    while (i<40)
    {
        cout<<"for the employee "<<i<<endl;
        cout<<"enter the hours of your working"<<endl;
        cin>>hours;
       if (hours>40)
       {
            overt=hours-40;
            pay = overt*12;

            cout<<"your overtime payment is "<<pay<<endl;
     }
       else{
           cout<<"you did not do overtime"<<endl;
     }
        i++;
    }
    return 0;
}