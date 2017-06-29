double fact(int);
double pow(double, double);
double hermiteOdd(int n, double x) {
  int l;
  double sum=0.0;
  for(l=0;l<=(n-1)/2;l++){
    sum+=pow(-1.0,(n-1)/2-l)*pow(2.0*x,2.0*l+1.0)/(fact(2*l+1)*fact((n-1)/2-l));
  }
  return sum*fact(n);
}

