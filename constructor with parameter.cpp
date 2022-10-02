#include<iostream>
using namespace std;
class triangle
{
private:
    int height;
    int width;
public:
    triangle(int k,int p);
    area();
};
triangle::triangle(int k,int p)
{
    height=k;
    width=p;
}

int triangle::area()
{
    return (height*width);
}
int main()
{
    triangle ob1(10,20);
    cout<<ob1.area()<<endl;
    return 0;
}
