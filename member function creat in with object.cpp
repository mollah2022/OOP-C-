#include<iostream>
using namespace std;

class triangle
{
public:
    int height;
    int width;
    int area()
    {
        return height*width;
    }
};
int main()
{
    triangle ob,ob1;
    ob.height=10;
    ob.width=25;
    cout<<ob.area()<<endl;
    cout<<endl;

    ob1.height=100;
    ob1.width=15;
    cout<<ob1.area()<<endl;
    cout<<endl;

    return 0;

}
