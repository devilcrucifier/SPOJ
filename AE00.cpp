#include<iostream>
#include<math.h>
using namespace std;
int main()
{
int n,i,j,count=0;
cin>>n;
for(i=1;i<=sqrt(n);i++)
    for(j=i+1;i*j<=n;j++)
        count++;
count+=sqrt(n);
cout<<count;
return 0;
}
