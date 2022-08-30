#include <cmath>

double compute(int n,double dt){
  return n*dt;
}

double scale1();
double scale2();

double getDt(double dt){
  double magnitude=std::pow(10,std::floor(std::log10(dt)));
  dt=std::floor(dt/magnitude*1e7)/1e7*magnitude;
  return dt;
}
