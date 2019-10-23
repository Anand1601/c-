#include<iostream>
using namespace std;
int main()
{
    int tworaisedmax=1,threeraisedmin=1;
    int i,j,m,n;
    cout<<"enter m and n:";
    cin>>m>>n;
    for(i=m,j=n;((i>=1)||(j>=1));i--,j--)
    {
      if((i>=1)&&(j>=1))
        {threeraisedmin*=3;}
        tworaisedmax*=2;
    }
    cout<<"2 raised is:"<<tworaisedmax<<endl;
    cout<<"3 raised is:"<<threeraisedmin;
    return 0;
}
