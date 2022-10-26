#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,z,a,b,c;
        cin>>x>>y>>z;
        a=(x+y);
        b=(y+z);
        c=(z+x);
        if(a<z || b<x || c<y)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
    return 0;
}
