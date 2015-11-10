#include <iostream>
#include <complex>
using namespace std;
int main(){
  int n;
for(double re=-2; re<=2; re+=0.01){
  for(double im=-2; im<=2; im+=0.01){
    complex<double> z0=complex<double>(re,im);
    complex<double> z=z0;
    for(n=0;n<=40; n++){
    complex<double> z1=z;
    z= z-(z*z*z-1.0)/(3.0*z*z);
      if (abs(z-z1)<1e-8) break;
    }
    cout <<real(z0)<<"\t"<< imag(z0)<<"\t"<<n<< endl;
  }
  
}

  return 0;
}
