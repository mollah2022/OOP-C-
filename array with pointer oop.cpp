#include<iostream>
using namespace std;
class triangle
{
private:
    int height;
    int width;
public:
   void set(int a,int b);
    int area();
};
void triangle::set(int a,int b)
{
    height=a;
    width=b;
}
int triangle::area()
{
    return (height*width);
}
int main()
{
    triangle ob1[5];
    triangle *p;
    ob1[0].set(1,3);
    ob1[1].set(2,3);
    ob1[2].set(3,3);
    ob1[3].set(4,3);
    ob1[4].set(6,3);
    for(int i=0;i<5;i++)
    {
        cout<<i<<" = "<<ob1[i].area()<<endl;
    }
    p=ob1;
    ob1[0].set(3,3);
    ob1[1].set(9,3);
    ob1[2].set(10,3);
    ob1[3].set(11,3);
    ob1[4].set(12,3);
    for(int i=0;i<5;i++)
    {
        cout<<i<<" = "<<ob1[i].area()<<endl;
    }
  p=ob1;
  for(int i=0;i<5;i++)
  {
      cout<<i<<"="<<(p+i)->area()<<endl;
  }
  return 0;
}
