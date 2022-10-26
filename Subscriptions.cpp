#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,z;
        double k;
        cin>>x>>y;
        k=ceil ((double) x/6);
        cout<<y*k<<endl;
    }
    return 0;

}
