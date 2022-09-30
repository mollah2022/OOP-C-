#include<iostream>
#include<string.h>
using namespace std;

class student
{
public:
 string s1;
 long long int id;
 long long int cell;
 double cgpa;
};
int main()
{
    student ob1,ob2,ob3;
    ob1.s1="sajib ahmed";
    ob1.id=21225103053;
    ob1.cell=1771434546;
    ob1.cgpa=3.97;
    cout<<ob1.s1<<endl<<ob1.id<<endl<<ob1.cell<<endl<<ob1.cgpa<<endl;
    cout<<endl;
    ob2.s1="rakib ahmed";
    ob2.id=21225103076;
    ob2.cell=1791434547;
    ob2.cgpa=3.99;
    cout<<ob2.s1<<endl<<ob2.id<<endl<<ob2.cell<<endl<<ob2.cgpa<<endl;
    cout<<endl;
    ob3.s1="siyam ahmed";
    ob3.id=21222102081;
    ob3.cell=1756185033;
    ob3.cgpa=4.00;
    cout<<ob3.s1<<endl<<ob3.id<<endl<<ob3.cell<<endl<<ob3.cgpa<<endl;
    return 0;

}
