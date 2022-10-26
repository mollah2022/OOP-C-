#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,k,p;
        cin>>x;
        p=(10*x)/100;
        cout<<max(100,p)<<endl;
    }
    return 0;
}
