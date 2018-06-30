#include <stdio.h> 
#include <math.h>
double Resolve( double,double,double,double );
int main()
{
    double a,b,c,d;
    double y;
    printf("input a b c d:");
    scanf("%lf%lf%lf%lf", &a, &b, &c, &d);
    y = Resolve(a,b,c,d);
    printf("output:\n%.4lf\n", y);
    return 0;
}
double f(double a,double b,double c,double d,double x)
{
    return a*x*x*x + b*x*x + c*x +d ;
}
double f1(double a,double b,double c,double x)
{
    return 3*a*x*x + 2*b*x + c ;
}
 
double Resolve( double a,double b,double c,double d )
{
    double x0,x1,e;
    x0=1;
    e=f(a,b,c,d,x0);
    do {
        x1=x0-e/f1(a,b,c,x0) ;
        x0=x1;
        e=f(a,b,c,d,x0);
    }while( e >= 1e-5 );
    return x1 ;
}
