#include<iostream>
using namespace std;
class base1
{
public:
    int roll;
    int year;
    base1(int x,int y)
    {
        roll=x;
        year=y;
    }
};
class base2
{
public:
    int section;
    base2(int z)
    {
        section=z;
    }
};
class derive:public base1,public base2
{
public:
    int amount;
     derive (int x,int y,int z,int k):base1(x,y),base2(z)
    {
        amount=k;
    }
    void show()
    {
        cout<<roll<<endl<<year<<endl<<section<<endl<<amount<<endl;
    }
};

int main()
{
    derive ob1(53,2022,2,81600);
    ob1.show();
    return 0;

}


