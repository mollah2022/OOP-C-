#include<iostream>
using namespace std;
class info
{
private:
    string s1;
    int id;
    int section;
    string group;
    string dept;
public:
    void set();
    int get();
};
class student:private info
{
public:
    int printf();
};
void info::set()
{
    cin>>s1>>id>>section>>group>>dept;
}
int info::get()
{
    cout<<s1<<endl<<id<<endl<<section<<endl<<group<<endl<<dept<<endl;
}
int student::printf()
{
     set();
     get();
}
int main()
{
    student ob1;
    ob1.printf();
    //ob1.set();
    //ob1.get();
    return 0;

}

