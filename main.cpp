#include <cstdio>

double compute(int n,double dt);

int main(){
  double dt;
  int n;
  dt=0.005;
  for(int n=0;n<1000;n+=50) {
    std::printf("%f\n",compute(n,dt));
  }
  return 0;
}