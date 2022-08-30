#include <string>
#include <sstream>

double scale1(){
  return 1.0;
}
double scale2(){
  return 1.0;
}

bool convertToAny(const std::string & str,double & t) {
  std::istringstream istr(str.c_str());
  bool ok=static_cast<bool>(istr>>t);
  if(!ok) return false;
  std::string remaining;
  istr>>remaining;
  return remaining.length()==0;
}

