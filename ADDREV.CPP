#include<stdio.h>
int rev(int num)
{
    int revnum=0;
    while(num>0)
    {
        revnum=revnum*10+num%10;
        num=num/10;
    }
    return revnum;
}
int main()
{
    int n,a,b,a1,b1,i,sum,sum1;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d %d",&a,&b);
        a1=rev(a);
        b1=rev(b);
        sum=a1+b1;
        sum1=rev(sum);
        printf("%d\n",sum1);
    }
    return 0;
}

