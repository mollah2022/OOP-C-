
#include<iostream>
using namespace std;
class triangle
{
private:
    int height;
    int width;
public:
    triangle(int a,int b);
    int area();
};
 triangle::triangle(int a,int b)
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
    triangle ob1[5]={triangle(2,2),triangle(2,2),triangle(2,2),triangle(4,2),triangle(4,2)};

    for(int i=0;i<5;i++)
    {
        cout<<i<<" = "<<ob1[i].area()<<endl;
    }
    return 0;
}
