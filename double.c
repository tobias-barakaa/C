#include <stdio.h>
double circularArea( double r );
int main()
{
double radius = 1.0, area = 0.0;
printf( " Areas of Circles\n\n" );
printf( "Radius Area\n" "-------------------------\n" );
area = circularArea( radius );
printf( "ddddd%10.1f%10.2f\n", radius, area );
radius = 5.0;
area = circularArea( radius );
printf( "ssssss%10.1f%10.2f\n", radius, area );
return 0;
}

double circularArea( double r )
{
const double pi = 3.1415926536;
return pi * r * r;
}


