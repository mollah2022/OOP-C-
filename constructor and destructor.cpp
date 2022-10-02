#include<iostream>
using namespace std;
class triangle
{
private:
    int height;
    int width;
public:
    triangle(int k,int p);
    ~triangle();
    area();
};
triangle::triangle(int k,int p)
{
    height=k;
    width=p;
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
    triangle ob1(10,20),ob2(20,5);
    //cout<<ob1.area()<<endl;
    return 0;
}

