//Numerical Method
//Secant Method

#include<stdio.h>
#include<math.h>
float f(float x)
{
    float y=5*x*x*x-3*x*x+2*x+3;
    return y;
}
int main()
{
    printf("Take The Number of Iterations What do you want :\n");
    int i,n;
    scanf("%d",&n);
    float x1,x2;
    x1=4;
    x2=5.5;
    float e=0.01;
    for(i=1; i<=n; i++)
    {
        float xm=x2-( (f(x2)*(x2-x1) )/(f(x2)-f(x1)));
        printf("Iteration %d :  %0.4f\n",i,xm);

        x1=x2;
        x2=xm;
    }

    return 0;
}

