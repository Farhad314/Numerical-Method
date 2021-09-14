//Given function is x^2-4x-10 = 0;
//Let f(x)=x^2-4x-10;in 1st time
//range X2=-1,X1=-2
//Example 6.4
//Numerical Method
//Bisection Method
#include<stdio.h>
#include<math.h>

double f(double x)
{
    double y=x*x*x-20;
    return y;
}
int main()
{
    double x1,x2,xm=0,a,b,c;
    x1=1,x2=4;

    printf("Number of iterations you want to take\n");

    int i,n;
    scanf("%d",&n);
    /*Main code*/
    for(i=1;i<=n;i++)
    {
        a=f(x1);
        b=f(x2);
        xm=(x1+x2)/2;
        printf("Iteration %d : %lf\n",i,xm);
        c=f(xm);

        if(c*a<0)
            x2=xm;
        else
            x1=xm;
    }
    return 0;
}
