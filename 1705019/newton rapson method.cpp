/* Program: Finding real roots of nonlinear
   equation using Newton Raphson Method */
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>

#define    f(x)    x*x +x -2

/* Defining derivative of g(x).
   As you change f(x), change this function also. */
#define   g(x)   2*x+1

int main()
{
	 double x0, x1, f0, f1, g0, e;
	 int step = 1, N;

     /* Inputs */
	 printf("\nEnter initial guess:\n");
	 scanf("%lf", &x0);
	 printf("Enter tolerable error:\n");
	 scanf("%lf", &e);
	 printf("Enter maximum iteration:\n");
	 scanf("%d", &N);
	 /* Implementing Newton Raphson Method */
	 printf("\nStep\t\tx0\t\tf(x0)\t\tx1\t\tf(x1)\n");
	 while(1)
	 {
		  g0 = 2*x0+1;
		  f0 = x0*x0+x0-2;
		  if(g0 == 0.0)
		  {
			   printf("Mathematical Error.");
			   return 0;
		  }


		  x1 = x0 - f0/g0;


		  printf("%d\t\t%lf\t%lf\t%lf\t%lf\n",step,x0,f0,x1,f1);
		  x0 = x1;

		  f1 = x1*x1+x1-2;
		  step = step+1;
		  if(fabs(f1)>e)
          {
              break;
          }
          step = step+1;
          if(step > N)
		  {
			   printf("Not Convergent.");
			   return 0;
		  }


	 }

	 printf("\nRoot is: %lf", x1);
	 return 0;
}
