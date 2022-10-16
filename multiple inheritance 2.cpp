# include<iostream>
using namespace std;
class B1
{
int a;
public:
B1(int x){a = x;}
int geta(){return a;}
};
class D1 {
int b;
public:
D1(int y) {b = y;}
int getb(){return b;}
};
class D2 : public B1, public D1
{
int c;
public:
D2(int x, int y, int z): B1(x) ,D1(y) {c = z;}
int getc(){return c;}
void showabc(){cout<<geta()<< "\n"<<getb()<< "\n"<<c<< "\n";}
};
int main()
{
D2 ob(1,2,3);
ob.showabc();
cout<<ob.geta()<< "\n"<<ob.getb()<< "\n"<<ob.getc()<< "\n";
return 0;
}
