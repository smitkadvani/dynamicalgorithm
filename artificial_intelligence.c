#include<stdio.h>
int fact_Table[100]; //by default all array element will be initialed with 0



//10C8 = 10! / (8!*2!)
//     = 10 * 9 / [2!]

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
double smartFact(double n1,double n2)
{
    if(n1<n2)
    {

        printf("Invalid Input %d %d       ",n1,n2 );
        return 0;
    }
    else if(n1==n2)
    {
        return 1;
    }
    else
    {
        return (n1*smartFact(n1-1,n2));
    }
}


double ComFunction(double n1,double n2) // n1Cn2 i.e. 6C2
{
    double t1,t2;
    t1 = smartFact(n1,n2);


//10C8 = 10! / (8!*2!)
//     = 10 * 9 / [2!]
        printf("%Lf",t1);

    t2 = fact(n1-n2);
    return(t1/t2);
}
double main()
{
    double ans,max,min;
    double t1=10,t2=10;
    max = t1-t2 > t2 ? t1-t2:t2;
    min = t1-t2 < t2 ? t1-t2:t2;
    ans=smartFact(t1,max);
    ans = ans / fact(min);

    printf("%Lf",ans);

}




//10C8 = 10! / (8!*2!)
//     = 10 * 9 / [2!]
