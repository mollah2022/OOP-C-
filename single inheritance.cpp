#include<iostream>
using namespace std;
class base
{
  public:
      int roll;
      int year;
      base(int x,int p)
      {
          roll=x;
          year=p;
      }
};
class derive:public base
{
public:
    int section;
    derive(int x,int p,int g):base( x,p)
    {
        section=g;
    }
    void show()
    {
        cout<<roll<<endl<<year<<endl<<section<<endl;

    }
};


int main()
{
   derive ob1(53,2022,2);
   ob1.show();
   return 0;

}
