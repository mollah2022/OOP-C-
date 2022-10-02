#include<iostream>
using namespace std;
class triangle
{
private:
    int height;
    int width;
public:
    triangle();
    area();
};

int triangle::area()
{
    return height*width;
}

triangle::triangle()
{
    height=10;
    width=5;
}
int main()
{
    triangle ob1;
    cout<<ob1.area()<<endl;
    return 0;
}
