#include<iostream>
using namespace std;
class info
{
    string s1;
    int roll;
public:
    void set()
    {
        cin>>s1>>roll;
    }
    void get()
    {
        cout<<s1<<endl<<roll<<endl;
    }
};
class result
{
    double cgpa;
public:
    void sete()
    {
        cin>>cgpa;
        cout<<cgpa<<endl;
    }

};
class student : public info,result

{
public:
   int printf()
   {
       set();
       get();
       sete();
   }
};
int main()
{
   student ob1;
   ob1.printf();
return 0;
}
