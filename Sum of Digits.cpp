#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,temp,sum=0;
        cin>>x;
        while(x>0)
        {
        temp=x%10;
        sum+=temp;
        x=x/10;
        }
        cout<<sum<<endl;
    }
    return 0;
}
