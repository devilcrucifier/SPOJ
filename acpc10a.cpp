#include<iostream>
using namespace std;
int main()
{
int a1,a2,a3,a4,d,r;
while(cin>>a1>>a2>>a3)
    if(a1==0&&a2==0&&a3==0)
    return 0;
    else
    {
    if((a3-a2)==(a2-a1))
        {d=a3-a2;
        cout<<"AP "<<a3+d<<"\n";
        }
    else
    if((a3/a2)==(a2/a1))
        {r=a3/a2;
        cout<<"GP "<<a3*r<<"\n";
        }
    }
return 0;
}
