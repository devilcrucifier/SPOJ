#include<iostream>
using namespace std;
int main()
{
int t,x,y;
cin>>t;
while(t--)
{
cin>>x;
cin>>y;

if((x==y)&&(x%2==0))
{
    cout<<x+y<<"\n";
}
else
if((x==y)&&(x%2!=0))
{
    cout<<(x+y)-1<<"\n";
}
else
if((x%2==0)&&(y==x-2))
{
    cout<<x+y<<"\n";
}
else
if((x%2!=0)&&(y==x-2))
{
    cout<<(x+y)-1<<"\n";
}
else
if(x!=y||y!=x-2)
cout<<"No Number"<<"\n";
}
return 0;
}
