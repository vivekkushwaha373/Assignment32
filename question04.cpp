#include<iostream>
using namespace std;
class Addition
{
    public:
    int add(int x,int y)
    {
        return x+y;
    }
    int add(int x,int y,int z)
    {
        return x+y+z;
    }
};
int main()
{
Addition s1;
cout<<"sum is: "<<s1.add(2,3)<<endl;
cout<<"sum is: "<<s1.add(2,5,6)<<endl;
return 0;
}