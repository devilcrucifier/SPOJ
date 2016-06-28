#include<iostream>
#include<math.h>
using namespace std;
int main()
{int t,s;
cin>>t;
if(t>30 ||t<=0)
    return 0;
int arr[t];
s=t-1;
while(t)
{   int a,b,p,q; cin>>a>>b;
    if(b==0){if(a<=0)
                return 0;
        else
            arr[t-1]=1;}
    else if(a<=20 && a>=0 && b>0 && b<=2147483000){q=a%10;
        if(q==2||q==3||q==7||q==8){if(b%4==0)
                p=4;
            else p=b%4;}
        else if(q==4||q==9){
            if(b%2==0)
                p=2;
            else p=1;}
        else{p=1;}
        arr[t-1]=((int)pow(q,p))%10;}
    else return 0;
    t--;}
    for(int i=s;i>=0;--i)
		cout<<arr[i]<<"\n";
return 0;
}
