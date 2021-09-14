//Given function y=2* x * cos(2*x)-(x-2)*(x-2) ;
//Let f(x)=x^2-4x-10;
//range 1<x<3
//Example 6.5
//Numerical Method
//False Position Method

#include<stdio.h>
#include<math.h>

double f(double x)
{
    double y=2* x * cos(2*x)-(x-2)*(x-2);
    return y;
}
int main()
{
    printf("Take The Number of Iterations What do you want :\n");

    double x1,x2,a,b,m,Xm=0,c;

    x1=2;
    x2=3;

    int i,n;
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        a= f(x1);
        b=f(x2);
        Xm=(x1*b-x2*a)/(b-a);
        printf("Iteration %d : %0.4lf\n",i,Xm);
        c=f(Xm);

        if((c*a)<0)
            x2=Xm;
        else
            x1=Xm;

    }

    return 0;
}

