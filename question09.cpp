#include<iostream>
using namespace std;
#define pi 3.14
class Area
{
public:
    Area(int l,float b)
    {
    cout<<"area of rectangle is:"<<l*b<<endl;
    }
    Area(int h,int b)
    {
   cout<<"area of traingle is: "<<(h*b)/2<<endl;
    }
    Area(int r)
    {
        "arae of circle is: "<<pi*r*r<<endl;
    }
    
};
int main()
{

int n;
cout<<"Calculate area"<<endl;
cout<<"1 Area of rectangle"<<endl;
cout<<"2 Area of circle"<<endl;
cout<<"3 Area of tringle"<<endl;
cout<<"-----------------"<<endl;
cout<<"Select your option: ";
lebel:
cin>>n;
cout<<endl;

switch(n)
{
    case 1:
    Area a(3.5f,4);
    break;
    case 2:
    Area a(4);
    break;
    case 3:
    Area a(3,4);
    break;
    default:
    cout<<"Wrong Entry Enter Again: "<<endl;
    goto lebel;
}

return 0;
}