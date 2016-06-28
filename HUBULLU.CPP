#include <iostream>
using namespace std;

int main() {

	int t,n,p;
	cin>>t;
	while(t--)
	{
		cin>>n;
		cin>>p;
		if(n==1)
			if(p==0)
				cout<<"Airborne wins.";
			else
				cout<<"Pagfloyd wins.";
		else
            if(p==0)
				cout<<"Airborne wins.";
			else
				cout<<"Pagfloyd wins.";
        cout<<"\n";
	}

	return 0;
}
