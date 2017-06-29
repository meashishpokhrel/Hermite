#include<stdio.h>
FILE *fout1, *fout2;
double hermiteEven(int, double);
double hermiteOdd(int, double);
int main() {
  int i;
  double x;
  fout1=fopen("hermiteEven.dat","w");
  fout2=fopen("hermiteOdd.dat","w");
  for(i=-225;i<=350;i++){
    x=0.01*(double)i;
    fprintf(fout1,"%5.3lf %24.15lf %24.15lf\n",x,hermiteEven(2,x),hermiteEven(4,x));
  }
  fclose(fout1);
  for(i=-225;i<=350;i++){
    x=0.01*(double)i;
    fprintf(fout2,"%5.3lf %24.15lf %24.15lf\n",x,hermiteOdd(3,x),hermiteOdd(5,x));
   }
  fclose(fout2);
 }

