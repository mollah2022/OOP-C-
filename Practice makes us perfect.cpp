#include<iostream>
using namespace std;
int main()
{
    int t,k=0;
    int s1[20];
    for(int i=0; i<4; i++)
    {
        cin>>s1[i];
        if(s1[i]>=10)
            k++;
    }
    cout<<k<<endl;
    return 0;
}
