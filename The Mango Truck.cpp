#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,z,p=0;
        cin>>x>>y>>z;
        p=(z-y)/x;
        cout<<p<<endl;
        p=0;
    }
    return 0;
}
