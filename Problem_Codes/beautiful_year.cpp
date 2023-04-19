#include<bits/stdc++.h>
using namespace std;

int main()
{
    int year,i,a,b,c,d,temp;

    cin>>year;

    for(i=0; i<=9000; i++)
    {
        year++;
        temp =year;

        a=temp%10;
        temp=temp/10;
        b=temp%10;
        temp=temp/10;
        c=temp%10;
        temp=temp/10;
        d=temp;
        if (a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
        {
            cout<<d<<c<<b<<a;
            break;
        }

    }


    return 0;
}
