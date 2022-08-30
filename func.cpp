double compute(int n,double dt){
  return n*dt;
}

double scale1();
double scale2();

double getDt(double dt){
  return dt/scale1()*scale2();
}
