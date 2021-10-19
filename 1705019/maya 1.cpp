/*program POLY evaluates a polynomial of degree n at any point x using HORNER'S rule.

Variable used:
n - degree of polynomial
poly - array of polynomial coefficients
x - points of evaluation */

#include <iostream>

using namespace std;

int horner(int poly[], int n, int x)

{

    int result = poly[0];

    for (int i=1; i<=n; i++)
        {
        result = result*x + poly[i];
        }

    return result;

}


int main()

{

    int poly[100], n, x;
    cout<<"Input degree of polynomial n "<<endl;
     cin>>n;
cout<<"Input polynomial coefficients poly[0] to poly[n] "<<endl;
     for(int i=0;i<=n;i++)
     {
         cin>>poly[i];
     }
     cout<<"Input value of x "<<endl;
      cin>>x;

     cout << "Value of polynomial is  " << horner(poly, n, x)<<endl;

    return 0;

}
