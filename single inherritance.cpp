#include<iostream>
using namespace std;
class student
{
    int roll;
public:
    void setx(int x)
    {
        roll=x;
    }
    void showx()
    {
        cout<<roll<<endl;
    }

};
class result:public student
{
    double cgpa;
public:
    void sety(double y)
    {
        cgpa=y;
    }
    void showy()
    {
        cout<<cgpa<<endl;
    }
};

int main()
{
    result ob1;
    ob1.setx(10);
    ob1.sety(3.89);
    ob1.showx();
    ob1.showy();
    return 0;

}
