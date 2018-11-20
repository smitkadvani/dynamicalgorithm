#include<stdio.h>
int fact_Table[100]; //by default all array element will be initialed with 0
double fact(double n)
{
    int nn=(int)n; // array subscript cannot be integer
    if (n==0)
        return 1;
    else if(n==1)
        return 1;
    else
    {
        if(fact_Table[nn]!=0)
        {
            return fact_Table[nn];
        }
        else
        {
            return (fact_Table[nn]=n*fact(n-1));
        }
    }
}
double ComFunction(double n1,double n2) // n1Cn2 i.e. 6C2
{
    return (fact(n1)/(fact(n1-n2)*fact(n2)));
}
double main()
{
    double ans;
    ans=ComFunction(12,6);
    printf("%Lf",ans);

}
