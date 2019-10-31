#include <iostream>
#include <random>
#include <stdlib.h>
#include <cmath>
int main(){
	
  float p=0;
  int N=1000;
  float delta=1.0;
  float sigma=1.0;
  float propuesta;
  float r;
  float gaussiana;
  float gauss;
  float alpha;
	int i;
  
  srand48(8);

  p = drand48();
	
  for (i=0;i<N;i++){  
    propuesta = p + (drand48()*-0.5)*delta;
	gaussiana= exp(-propuesta*propuesta/(2.0*sigma*sigma));
	gauss= exp(-p*p/(2.0*sigma*sigma));
	r=gaussiana/gauss;
	  
	  if(r>1){
		  r=1;
	  }
	alpha=drand48();
	if (alpha<r){
		p=propuesta;
	}
	else{
		p=p;
	} 
	  
    std::cout << p <<std::endl;
  }
  
  return 0;
}
