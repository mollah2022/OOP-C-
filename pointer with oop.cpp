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
   triangle ob1;
   triangle *p;
   ob1.set(1,5);
   cout<<ob1.area()<<endl;
   p=&ob1;
   ob1.set(10,20);
   cout<<ob1.area()<<endl;
   return 0;

}
