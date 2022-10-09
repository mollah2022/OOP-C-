#include<iostream>
using namespace std;
class student
{
public:
    string s1;
    int roll;
    double cgpa;
};
class result:public student
{
public:
   void set()
   {
       cin>>s1>>roll>>cgpa;
   }
};

int main()
{
    result ob1;
    ob1.set();
    cout<<ob1.s1<<endl<<ob1.roll<<endl<<ob1.cgpa<<endl;
    return 0;
}
