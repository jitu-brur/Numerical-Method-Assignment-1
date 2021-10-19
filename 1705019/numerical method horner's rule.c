/*program POLY evaluates a polynomial of degree n at any point x using HORNER'S rule.

Variable used
n - degree of polynomial
a - array of polynomial coefficients
x - points of evaluation
p -  value of polynomial at x */

#include<stdio.h>
#include<math.h>
 int main()
 {
     int n,i;
     int x,p,a[10];

     int horner(int n,int a[],int x);
     printf("Input degree of polynomial n\n");
     scanf("%d",&n);
     printf("Input polynomial coefficients a[0] to a[n]\n");
     for(i=0;i<=n;i++)
     {
         scanf("%d",&a[i]);
     }
     printf("Input value of x\n");
      scanf("%d",&x);

      p= horner(n,a,x);
      printf("\n");
      printf("f(x) = %d at x = %d\n",p,x);

     return 0;
 }
int horner(int n,int a[],int x)
{
    int i;
    int p;
    p=a[0];
    for(i=1;i<=n;i++)
    {
        p = p*x + a[i];
    }
    return p;
}

