#include<iostream>
using namespace std;
class student
{
public:
int x=0;
public:
student(){}
student(int y)
{
    cout<<"Constructor is called: "<<endl;
    x=y;
}
// student(student &s)
// {
//     cout<<"copy constructor is called: "<<endl;
//     x=s.x;
// }
// void operator=(student C)
// {
//     cout<<"=operator is called"<<endl;
//     x=C.x;
// }
void operator=(student &m)
{
    cout<<"m wala call hua: "<<endl;
    x=m.x;
}
void display()
{
    cout<<x;
}

};
int main()
{
student s1,s2;
s1.x=9;

// s1=s2;
s1=0;
s1.display();
    return 0;
}