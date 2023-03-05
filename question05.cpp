#include<iostream>
using namespace std;
class A
{
    int s;
    protected:
    A()
    {
    cout<<"defalut constructor called: "<<endl;
    }
    A(int x)
    {
    cout<<"Constructor for class A is called :"<<endl;
     s=x;
    }
    A(char a)
    {
    cout<<"Constructor for class A is called  :"<<endl;
     cout<<"hello vivek"<<endl;
    }
    void display()
    {
        cout<<s;
    }
};

class B:public A
{
public:
B():A(4)
{
cout<<"Constructor for b is called: "<<endl;
}
};
int main()
{
B s1;
// s1.display();


    return 0;

}