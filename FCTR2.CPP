#include<iostream>
using namespace std;
int main()
{
int t,n,i,a[200],car,dig,x,j;
cin>>t;
while(t--)
    {
     cin>>n;
     a[0]=1;
     dig=1;
     car=0;
     for(i=1;i<=n;i++)
        {for(j=0;j<dig;j++)
            {
             x=a[j]*i+car;
             a[j]=x%10;
             car=x/10;
            }
        while(car>0)
            {
             a[dig]=car%10;
             car=car/10;
             dig++;
            }
        }
        for(i=dig-1;i>=0;i--)
        cout<<a[i];
        cout<<"\n";
    }
return 0;
}
