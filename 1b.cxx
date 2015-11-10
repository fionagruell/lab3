#include <iostream>
#include <complex>
#include <cmath>
using namespace std;
complex<double> h(double x){
  complex<double> ii=complex<double> (0.0,1.0);
  return tan(x*((1.0,0.0)+ii)); 
 
}
int main(){
  int N=100; //steps of iterations
  double pi=M_PI;
  complex<double> z;
  complex<double> ii=complex<double> (0.0,1.0);
  complex<double> f[N];
  for(int k=0;k<N; k++){
    double phi=-pi+k*2*pi/N;
    z=phi*ii;
    f[k]=h(phi);
  }
  for (int k=0; k<N;k++){
    double phi=0+k*2*pi/N;
    cout <<phi<<"\t"<<real(f[k])<<"\t"<<imag(f[k])<<"\t"<< abs(f[k])<< endl;
  }
    
  
  
  return 0;

 
  return 0;
}
