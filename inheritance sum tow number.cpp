#include<iostream>
using namespace std;
class student
{
    int x;
public:
    void setx(int p)
    {
        x=p;
    }
    void showx()
    {
        cout<<x<<endl;
    }
};
class result:private student
{
    int y;
public:
    void sety(int k,int l)
    {
        setx(k);
        y=l;
    }
    void showy()
    {
        showx();
        cout<<y<<endl;
    }
};



int main()
{
    result ob1;
    ob1.sety(10,30);
    ob1.showy();
    return 0;

}
