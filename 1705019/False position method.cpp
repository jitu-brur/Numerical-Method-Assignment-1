/* Program: Finding real roots of nonlinear
   equation using False Position Method
  */

#include<stdio.h>

#include<math.h>
#define   f(x)   x*x+ x - 2



int main()
{

	 double x0, x1, x2, f0=0, f1=0, f2=0, e;
	 int step = 1;
	 printf("\nEnter two initial guesses:\n");
	 scanf("%lf%lf", &x0, &x1);
	 printf("Enter tolerable error:\n");
	 scanf("%lf", &e);
	 /* Calculating Functional Values */
	 f0 = x0*x0+x0-2;
	 f1 = x1*x1+x1-2;

	 /* Checking whether given guesses brackets the root or not. */
	 if( f0*f1 > 0.0)
	 {
		  printf("Incorrect Initial Guesses.\n");
		 return 0;
	 }
	 /* Implementing Regula Falsi or False Position Method */
	 printf("\nStep\t\tx0\t\tx1\t\tx2\t\tf(x2)\n");
	 while(1)
	 {
		  x2 = x0 - (x0-x1) * f0/(f0-f1);
		  f2 = x2*x2+x2-2;
		  printf("%d\t\t%lf\t%lf\t%lf\t%lf\n",step, x0, x1, x2, f2);

		  if(f0*f2 < 0)
		  {
			   x1 = x2;
			   f1 = f2;
		  }
		  else
		  {
			   x0 = x2;
			   f0 = f2;
		  }
		  if(fabs(f2)<e)
          {
              break;
          }
		  step = step + 1;


	 }
 printf("\nRoot is: %lf", x2);

	 return 0;
}
