#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,c=0;
        cin>>x;
        string s1;
        cin>>s1;
        for(int i=0;i<s1.size();i++)
        {
           c++;
           if(s1[i+1]=='0')
           {
               break;
           }
        }
        cout<<c<<endl;
    }
    return 0;
}
