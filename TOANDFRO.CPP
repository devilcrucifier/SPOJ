#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
int c;
cin>>c;
while(c!=0)
{
    int r,i,j,len,k=0;
    char a[400];
    cin>>a;
    len=strlen(a);
    r=len/c;
    char encr[r][c];
    for(i=0;i<r;i++)
    {
        if((i%2)==0)
            for(j=0;j<c;j++)
                encr[i][j]=a[k++];
        else
            for(j=c-1;j>=0;j--)
                encr[i][j]=a[k++];
    }
    for(i=0;i<c;i++)
        for(j=0;j<r;j++)
            cout<<encr[j][i];
    cout<<"\n";
    cin>>c;
}
return 0;
}

