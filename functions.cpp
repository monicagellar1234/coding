#include<iostream>
using namespace std;
int add(int first,int second)
{
    int res;
    res=first+second;
    return res;
}
int sub(int first,int second)
{
    int res;
    res=first-second;
    return res;
}
int main()
{
    int first,second;
    cout<<"enter the first number"<<endl;
    cin>>first;
    cout<<"enter the second number"<<endl;
    cin>>second;
    cout<<"the function returned to "<<add(first,second)<<endl;
    cout<<"the function returned to "<<sub(first,second)<<endl;


    return 0;
}
