#include<iostream>
using namespace std;
//constructor implementation in multilevel inheritence;
class student
{
protected:
student()
{
    cout<<"constructor of class student is called: "<<endl;
}
~student()
{
    cout<<"destructor for class student is called: "<<endl;
}
};
class teacher:public student
{
protected:
teacher():student()
{
    cout<<"constructor of class teacher is called: "<<endl;
}
~teacher()
{
    cout<<"destructor for class teacher is called: "<<endl;
}
};
class principal:public teacher
{
public:
principal():teacher()
{
    cout<<"constructor of class principle is called: "<<endl;
}
~principal()
{
    cout<<"destructor for class principle is called: "<<endl;
}
};

int main()
{
 principal s1;  


    return 0;
}