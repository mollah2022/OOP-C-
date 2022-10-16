# include<iostream>
using namespace std;
class base
{
int i;
public:
base(int n)
{
i = n ;
cout <<"Parameterized Base Constructor"<<endl;
}
~base(){cout <<"Base Destructor"<<endl;}
void showi(){cout<<i<< "\n";}
};
class derived : public base
{
int j;
public:
derived(int n, int m) : base (m)
{
j = n ;
cout <<"Parameterized Derived Constructor"<<endl;
}
~derived(){ cout <<"Derived Destructor"<<endl;}
void showj(){cout<<j<< "\n";}
};
int main()
{
derived ob(20,30);
ob.showi();
ob.showj();
return 0;
}
