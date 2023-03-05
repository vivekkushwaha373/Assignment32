#include<iostream>
using namespace std;
class Rectangle
{
int x;
public:
void area(float y)
{
cout<<"float called"<<endl;
x=(int)y;
}
void area(int y)
{
cout<<"int called"<<endl;
x=y;
}
void area(double y)
{
cout<<"double called "<<endl;
x=(int)y;
}
void area()
{
cout<<"area is: "<<x*x<<endl;
}
};

int main()
{
Rectangle R;
R.area(1);
R.area();
R.area(3.5f);
R.area();
R.area(3.14);
R.area();

    return 0;
}