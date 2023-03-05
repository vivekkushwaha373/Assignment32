#include<iostream>
using namespace std;
class factorial
{
public:
    int x=0;
public:
factorial(){}
factorial(int y)
{
    x=y;
}
factorial(factorial &c)
{

x=++c.x;
}

void operator=(factorial g)
{
    x=g.x;
}
};

int main()
{
int n;
cout<<"Enter the number: ";
cin>>n;
int s=1;
factorial s1;
factorial c1;
for(int i=1;i<=n;i++)
{
    s1=c1;
    s=s*s1.x;
}
cout<<"factorial of "<<n<<" is: "<<s;


    return 0;
}