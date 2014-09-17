#include <iostream>
#include <ctime>
#include <cmath>
#define kPi 3.14159265358979323846

using namespace std;

//
// Generate a random number between 0 and 1
// return a uniform number in [0,1].
double unifRand()
{
    return rand() / double(RAND_MAX);
}
//
// Generate a random number in a real interval.
// param a one end point of the interval
// param b the other end of the interval
// return a inform rand numberin [a,b].
double unifRand(double a, double b)
{
    return (b-a)*unifRand() + a;
}
//
// Generate a random integer between 1 and a given value.
// param n the largest value 
// return a uniform random value in [1,...,n]
long unifRand(long n)
{
    
    if (n < 0) n = -n;
    if (n==0) return 0;
    /* There is a slight error in that this code can produce a return value of n+1
    **
    **  return long(unifRand()*n) + 1;
    */
    //Fixed code
    long guard = (long) (unifRand() * n) +1;
    return (guard > n)? n : guard;
}
//
// Reset the random number generator with the system clock.
void seed()
{
    srand(time(0));
}


void GetPoint(double &x, double &y, double &z){
   // double fR=9.0000000000002;
    double fR=8.0;
  double phi  = unifRand(0., 2.* kPi);
  double cosphi  = std::cos(phi);
  double sinphi  = std::sin(phi);

  // generate a random point uniform in area
  double costheta = unifRand(-1., 1.);
  double sintheta = std::sqrt(1. - (costheta*costheta));

  x=fR * sintheta * cosphi;
  y=fR * sintheta * sinphi;
  z=fR * costheta;
  
  
}

int main()
{
    seed();
    /*
    for (int i = 0; i < 20; ++i)
    {
        cout << unifRand() << endl;
    }
     */
    cout << unifRand(-1.,1.) << endl;
    double x=0.0,y=0.0,z=0.0;
    GetPoint(x,y,z);
    std::cout.precision(15);
    std::cout<<fixed<<x<<","<<y<<","<<z<<std::endl;
    return 0;
}