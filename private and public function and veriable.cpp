#include<iostream>
using namespace std;

class triangle
{
private:
    int height;
    int width;
public:
    void set(int h,int w);
    int area();
};

void triangle::set(int h,int w)
{
    height=h;
    width=w;
}
int triangle::area()
{
    return height*width;
}
int main()
{
    triangle ob1;
   ob1.set(10,20);
   int p=ob1.area();
   cout<<p<<endl;
   return 0;

}
