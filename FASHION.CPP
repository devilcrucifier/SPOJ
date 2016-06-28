#include<iostream>
using namespace std;
void bubb(int a[], int n)
{
int temp;
for(int i=0;i<n-1;i++)
    {
    for(int j=0;j<n-i-1;j++)
        {
        if(a[j]>a[j+1])
            {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
            }
        }
    }
}
int main()
{
int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    int m[1000],w[1000],hot[1000];
    for(int i=0;i<n;i++)
        cin>>m[i];
    for(int j=0;j<n;j++)
        cin>>w[j];

    bubb(m,n);
    bubb(w,n);
    int sum=0;
    for(int i=0;i<n;i++)
        {
        hot[i]=m[i]*w[i];
        sum+=hot[i];
        }
     cout<<sum<<"\n";


}
return 0;

}
