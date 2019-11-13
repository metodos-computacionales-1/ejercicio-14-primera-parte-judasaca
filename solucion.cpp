#include <iostream>
#include <cmath>
using namespace std;
double f0(double t, double y0, double y1); //Returns derivative of y0
double f1(double t, double y0, double y1); //Returns derivative of y1

const double K = 100;
const double M = 2;
const double LAMBDA = 1;
const double DeltaT = 0.01;

int main(void)
{
    float t=0;
    float v=2;
    float x=5;
    for(int i=0;i<1000;i++){
        cout<<t<<" "<<v<<endl;
        t=t+DeltaT;
        v = v-(DeltaT*K*x);
        x = x + DeltaT*v;
    }
    
    return 0;
}

double f0(double t, double y0, double y1)
{
  return y1;
}

double f1(double t, double y0, double y1)
{
  return (-K/M)*pow(y0, LAMBDA);
}