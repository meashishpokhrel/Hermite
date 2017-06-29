double fact(int);
double pow(double, double);
double hermiteEven(int n, double x){
  int l;
  double sum=0.0;
  for(l=0;l<=n/2;l++){
    sum+=pow(-1.0,(n/2.0-l))*pow(2.0*x,2.0*l)/(fact(2*l)*fact(n/2-l));
  }
  return sum*fact(n);
 }

