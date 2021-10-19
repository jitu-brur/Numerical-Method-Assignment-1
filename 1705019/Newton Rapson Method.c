#include<stdio.h>
#include<math.h>
#define f(x)  (x)*(x)+(x)-2
#define g(x)   2*(x)+1
#define eps 0.000001
#define max 20
int main()
{
    int count=1;
    double x0,x1,f0,f1;
    printf("\n");
    printf("Input initial value of x0:\n");
    scanf("%lf",&x0);
    printf("\n");

    for(int i=0;i<max;i++)
    {
        f0=f(x0);
        f1=g(x0);
        x1=(x0-(f0/f1));

        printf("Root = %lf\n",x1);

        if((fabs((x1-x0)/x1))<eps)
        {
            printf("Function Value = %lf\n",f(x1));
            printf("Number of the Iteration = %d\n",count);
            break;

        }

        else
        {
            x0=x1;
            count++;
            if(count<max)
            {
               i=0;
            }
            else
            {
                printf("\nSolution does not converge\n");
                printf("In %d iteration \n",max);
            }
        }


    }
    return 0;

}
