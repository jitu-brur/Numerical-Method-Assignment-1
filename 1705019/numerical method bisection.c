/*program to finds a root of a nonlinear equation  using the bisection method*/


#include<stdio.h>
#include<math.h>

double F( double x) //Function definition
{
    //This return the value of the Function
    return (pow(x,2) + x -2);
}

int main()
{

    printf("This program illustrates the bisection method in C:\n\n");
    printf(" x^2 + x - 2 = 0\n\n");
    double x0,x1;

    printf("\nEnter the first approximation to the root :  ");
    scanf("%lf",&x0);

    printf("\n\nEnter the second approximation to the root :   ");
    scanf("%lf",&x1);

    int iter;
    printf("\n\nEnter the number of iteration you want to perform :   ");
    scanf("%d",&iter);

    int ctr=1;
    double a=x0;
    double b=x1;
    double r,f1,f2,f3;

    //We check if the initial approximations are the root or not
    if(F(a)==0)// it is a root
        r=a;
    else if(F(b)==0)
        r=b;
    else //If the above two values are not the roots of the given function
    {
        while(ctr<=iter) //Since, ctr is initialized to 1
        {
            //This is an implementation of the algorithm mentioned above
            f1=F(a);
            r=(a+b)/2.0; //Returns a double value
            f2=F(r);
            f3=F(b);

            if(f2==0)
            {
                r=f2;
                break; //Execution moves out of the while loop to the statement just after it
            }
            printf("The root after %d iteration is %lf \n\n",ctr,r);

            if(f1*f2<0)//Both are of opposite sign
                b=r;
            else if(f2*f3<0)
                a=r;
            ctr++;
        }
    }

    printf("\n\n\nThe approximation to the root is %lf\n",r); //Gives the final value after mentioned iteration

    return 0;
}
