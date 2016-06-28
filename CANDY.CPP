#include<iostream>

using namespace std;

int main()
{
int i,j,b,n[10000],sum,mov,c,avg;
while(cin>>b){
    if(b!=-1){
		sum=0,mov=0,c=0,avg=0;
		for(i=0;i<b;i++){
			cin>>n[i];
			sum+=n[i];
		}
		if(sum%b!=0){
			mov=-1;
        }
		else{
			avg=sum/b;
			for(j=0;j<b;j++){
				c=n[j]-avg;
				if(c>0){
					mov+=c;
				}
			}
		}
		if(mov==-1)
            cout<<"-1\n";
        else
            cout<<mov<<"\n";
    }
    else
        return 0;
    }
return 0;
}
