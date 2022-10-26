#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,z,w,p=0;
        cin>>x>>y>>z>>w;
        p=((z*w)+x);
        if(p!=y)
        {
            if(p>y)
            {
                cout<<"overFlow\n";
            }
            else
            {
                cout<<"Unfilled\n";
            }
        }
        else
        {
            cout<<"filled\n";
        }
    }
    return 0;
}
