#include<bits/stdc++.h>
using namespace std;
// ***********days to year, week and month*************
int main(){
      int days, year, week;
      float month;
      cout<<"enter days"<<endl;
      cin>>days;
      year=days/365;
      month=days/30.5;
      week=days/7;
      cout<<"years are :"<<year<<endl;
      cout<<"months are :"<<month<<endl;
      cout<<"weeks are :"<<week<<endl;
      return 0;
}