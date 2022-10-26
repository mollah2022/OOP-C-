#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int c,x,y,k;
        cin>>c>>x>>y;
        k=(c-x)*y;
        cout<<k<<endl;
    }
    return 0;
}
