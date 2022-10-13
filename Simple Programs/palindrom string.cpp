#include<bits/stdc++.h>
using namespace std;
// ******************string is palindrom or not******************
// method 1- by reversing string
string reverse(string str)
{
  int i=0, j=str.length()-1;
  while (i<j)
  {
     int temp=str[i];
     str[i]=str[j];
     str[j]=temp;
     i++;
     j--;
  }
    return str;
}
int main()
{
    string str, str1;
    cout<<"enter the string"<<endl;
    cin>>str;
    reverse(str);
    //str1=str;
    str1=reverse(str);
    if (str1==str)
    {
        cout<<"palindrom";
    }
    else
        cout<<"not palindrom";
    return 0;
}
// method 2- without reversing
int main(){
    string str, str1;
    bool b=true;
    cout<<"enter string"<<endl;
    getline(cin, str);
    int start=0, end=str.length()-1;
     while (start<end)
     {
         if (str[start]!=str[end])
         {
            str1="not palindrom";
            b=false;
            cout<<str1;
            break;
         }
         start++;
         end--;
         
     }
     if(b==true)
     cout<<"palindrom";
     return 0;
}