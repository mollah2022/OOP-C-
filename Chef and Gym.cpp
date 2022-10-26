#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,z,k=0;
        cin>>x>>y>>z;
        k=(x+y);
        if(k<=z)
        {
            cout<<"2\n";
        }
        else if(k>z &&x<=z )
        {
            cout<<"1\n";
        }
        else
        {
            cout<<0<<endl;
        }
    }
    return 0;
}
