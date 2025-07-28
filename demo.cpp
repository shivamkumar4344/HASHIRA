#include<bits/stdc++.h>
#include "test.json"
using namespace std;
int main()
{
    int b,a,c;
    cin>>b>>a>>c;
    int d = (b*b) - (4*a*c);
    int m = 0;
    if(d >= 0)
        m++;
    else
        m = 0;

    m++;

    cout<<"Value of m is : "<<m<<endl;

    return 0;
}