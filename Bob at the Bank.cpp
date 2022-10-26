#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int w,x,y,z,p=0;
        cin>>w>>x>>y>>z;
        p=(w+(x*z)-(y*z));
        cout<<p<<endl;
        p=0;
    }
    return 0;
}
