#include<iostream>

using namespace std;

int main()
{
    long long a,b,add,multi,subs;

    cin>>a>>b;
    add = a+b;
    multi= a*b;
    subs= a-b;
    cout<<a<<" + "<<b<<" = "<<add<<endl;
    cout<<a<<" * "<<b<<" = "<<multi<<endl;
    cout<<a<<" - "<<b<<" = "<<subs<<endl;

    return 0;
}
