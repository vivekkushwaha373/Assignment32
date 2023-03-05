#include<iostream>
using namespace std;
class Animals
{
    virtual void sound()=0;//abstract class
};
class Dogs:public Animals
{
public:
void sound()
{
    cout<<"BHO...BHO...BHO"<<endl;
}
};
int main()
{
Dogs s1;
s1.sound();



    return 0;
}