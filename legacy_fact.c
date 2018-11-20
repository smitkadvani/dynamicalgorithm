#include<stdio.h>

int fact(int n)
{
    if (n==0)
        return 1;
    else if(n==1)
        return 1;
    else
       return n*fact(n-1);
}
int ComFunction(int n1,int n2) // n1Cn2 i.e. 6C2
{
    return (fact(n1)/(fact(n1-n2)*fact(n2)));
}
int main()
{
    int ans;
    ans=ComFunction(20,10);
    printf("%d",ans);

}
