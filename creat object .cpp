#include<iostream>
using namespace std;

class triangle
{
public:
    int height;
    int width;
};
int main()
{
    triangle ob,ob1;
    ob.height=10;
    ob.width=25;
    int area=(ob.height*ob.width);
    cout<<area<<endl;
    ob1.height=100;
    ob1.width=15;
    area =(ob1.height*ob1.width);
    cout<<area<<endl;
    return 0;

}
