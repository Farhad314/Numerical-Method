#include<stdio.h>
#include<math.h>
float y(float x)
{
	// Declaring the function f(x) = 1/(1+x*x)
	return 1/(1+x*x);
}
int main()
{
	// Range of definite integral
	float a = 0;
	float b = 1;

	// Number of grids. Higher value means
	// more accuracy
	int n = 6;
	// Grid spacing
	float h = (b-a)/n;

	// Computing sum of first and last terms
	// in above formula
	float s = y(a)+y(b);

	// Adding middle terms in above formula

	for (int i = 1; i < n; i++)
		{
		    if(i%3==0)
                s=s+2*y(a+h*i);
            else
                s = s + 3*y(a+i*h);
		}

	// h/2 indicates (b-a)/2n. Multiplying h/2
	// with s.
	float simpsons=(3*h/8)*s;

	printf("Value of integral is %6.4f\n",
				simpsons);
	return 0;
}
