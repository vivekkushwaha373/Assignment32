#include<iostream>
#include<cstring>
using namespace std;
class player
{
char name[20];
int player_no;
int match;
int *n_of_goal;
int *n_of_matches;
public:
player(char *str,int n,int matches)
{
  strcpy(name,str);
  player_no=n;
  match=matches;
  n_of_goal= new int[matches];
  n_of_matches=new int[matches];
  for(int i=0;i<matches;i++)
  {
    cout<<"Enter match number: ";
    cin>>n_of_matches[i];
    cout<<"Number of Goals: ";
    cin>>n_of_goal[i];
  } 

}
void display()
{
   for(int i=0;i<match;i++)
  {
    cout<<"match number: "<<n_of_matches[i]<<endl;
    
    cout<<"Number of Goals: "<<n_of_goal[i]<<endl;
    
  }   
}
~player()
{
    delete[]n_of_goal;
    delete[]n_of_matches;
}
};
int main()
{
player s1("vivek",2,3);
s1.display();

    return 0;
}