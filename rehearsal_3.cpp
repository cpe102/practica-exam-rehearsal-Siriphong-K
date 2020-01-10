#include <iostream>
#include<cmath>
using namespace std;
double sumSqrt(double A)
{      
    double B=0;
    double L=0.00;
    double E=1+B;
    while (L<A)
    {
        B=B+(1/sqrt(A-L));
        L++;
    }
    
   if (A<=0)
   {
       return L;
   }
    return B;
}


int main()
{
    double a = sumSqrt(20);
    double b = sumSqrt(10);
    double c = sumSqrt(5);
    double d = sumSqrt(2);
    double e = sumSqrt(1);
    double f = sumSqrt(0);
    double g = sumSqrt(-1);
    
    cout << a << "\n" << b << "\n" << c << "\n" << d << "\n" << e << "\n" << f << "\n" << g << "\n";

}
