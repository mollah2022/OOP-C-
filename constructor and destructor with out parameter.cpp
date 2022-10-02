#include<iostream>
using namespace std;
class triangle
{
private:
    int height;
    int width;
public:
    triangle();
    ~triangle();
    area();
};
triangle::triangle()
{
    height=20;
    width=10;
    cout<<"CONSTRUCTOR\n"<<area()<<endl;
}

triangle::~triangle()
{
    cout<<"DESTRUCTOR\n"<<area()<<endl;
}
int triangle::area()
{
    return (height*width);  // destuctor kaj kore stack er moto jeita ses e oita sobar age hoi
}
int main()
{
    triangle ob1;
    //cout<<ob1.area()<<endl;
    return 0;
}


