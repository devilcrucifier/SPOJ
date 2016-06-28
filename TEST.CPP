#include<stdio.h>
int main()
{   int n;
    while(1)
    {
        scanf("%d",&n);
        if(n==42)
            exit(0);
        printf("\n%d",n);
    }
    return 0;
}
