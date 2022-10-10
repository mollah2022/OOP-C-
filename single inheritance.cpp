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
class student : public info

{
    int section;
    double cgpa;
public:
  void  sete()
    {
        cin>>section>>cgpa;
    }
   void gets()
   {
       cout<<section<<endl<<cgpa<<endl;
   }
   int printf()
   {
       set();
       get();
       sete();
       gets();
   }
};
int main()
{
   student ob1;
   ob1.printf();
return 0;
}
