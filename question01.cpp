#include<iostream>
using  namespace std;
class FLOAT
{

float x;
public:
void setdata(int n)
{
x=n;
}
void operator++()
{
    ++x;
}
void operator+()
{
  if(x<0)
  {
    x=-x;
  }
}
friend void operator-(FLOAT&);
void operator--()
{
    --x;
}
void display()
{
    cout<<x;
}
};
 void operator-(FLOAT &s)
 {
   s.x=-(s.x);
 }
int main()
{
FLOAT s1;
s1.setdata(9);
-s1;
s1.display();

    return 0;
}