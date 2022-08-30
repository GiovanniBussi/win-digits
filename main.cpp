#include <cstdio>
#include <string>

double compute(int n,double dt);

double getDt(double dt);

bool convertToAny(const std::string & str,double & t);

int main(){
  double dt;
  int n;
  convertToAny("0.005",dt);
  dt=getDt(dt);
  for(int n=0;n<1000;n+=50) {
    std::printf("%f\n",compute(n,dt));
  }
  return 0;
}
