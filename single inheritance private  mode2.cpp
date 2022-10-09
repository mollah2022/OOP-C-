
#include<iostream>
using namespace std;
class info
{
private:
    int s1;
     int id;
     int phone;
     int section;
    double cgpa;
public:
    int set(int p1,int g,int p,int w,double l )
    {
   s1=p1;
   id=g;
   phone=p;
   section=w;
   cgpa=l;
    }
    int get()
    {
        cout<<s1<<endl<<id<<endl<<phone<<endl<<section<<endl<<cgpa<<endl;
    }
};

class student:private info
{
public:
  int printf()
  {
    set(20880,53,62,02,3.86);
     get();
  }
};

int main()
{
    student ob1;
    ob1.printf();
    return 0;

}
