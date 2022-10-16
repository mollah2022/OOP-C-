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
class base2:public base1
{
public:
    int section;
    base2(int x,int y,int z):base1(x,y)
    {
        section=z;
    }
};
class derive:public base2
{
public:
    int amount;
     derive (int x,int y,int z,int k):base2(x,y,z)
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

