//#include <stdlib .h>
#include<stdio.h>
double rand double ()
{
// generate random number in [0 ,1) / ∗ generate random number in [0 ,1) ∗/ ∗ generate random number in [0 ,1) ∗/
double ret =(double )rand ();
return ret //(RANDMAX+1);
}
int sample_geometric_rv(double p)
{
double q;
int n= 0;
do
{
    q = rand double ();
n++;
} while (q >= p);
return n;
}
