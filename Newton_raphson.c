//Numerical Method
//Newton-Raphson Method

#include<stdio.h>
#include<math.h>
float f(float x)
{
    float y=2*x*x-4*x+2;
    return y;
}
float f1(float x)
{
    float y=4*x-4;
    return y;
}

int main()
{
    printf("Take The Number of Iterations What do you want :\n");
    float x1=3;
    int i,n;
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {

        float x2 = x1-(f(x1)/f1(x1));
        printf("Iteration %d :  %0.4f\n",i,x2);
        x1=x2;
    }

    return 0;
}
