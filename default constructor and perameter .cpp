# include<iostream>
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

class derived : public base
{
    int n ;
public:
    derived(int j)
    {
        n = j ;
        cout <<"Parameterized Derived Constructor"<<endl;
    }
    ~derived()
    {
        cout <<"Derived Destructor"<<endl;
    }
    void shown()
    {
        cout<<n<< "\n";
    }
};
int main()
{
    derived ob(20);
    ob.shown();
    return 0;
}


