#include<iostream>
using namespace std;
class base
{
public:
    base()
    {
        cout <<"Base Constructor"<<endl;
    }
    ~base()
    {
        cout <<"Base Destructor"<<endl;
    }
};
class derived:public base
{
    public:
     derived()
    {
        cout <<"Derived Constructor"<<endl;
    }
    ~derived()
    {
        cout <<"Derived Destructor"<<endl;
    }

};

int main()
{
    derived ob1;
    return 0;
}
