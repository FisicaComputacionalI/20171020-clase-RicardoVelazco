//En pocas palabras el còdigo te da el factorial de N, es decir, N!. Por ejemplo: si damos N=3, entonces: 1*1=1, 1 es diferente de 3; 1*(1+1)=2, 2 es diferente de 3; 2*(2+1)=6 3 es igual a 3; entonces el resultado es 6=3!.   
#include <iostream>
using namespace std;
int main ()
{
  int N=0; 
  cout <<"dame un numero entero"<< endl;
  cin>>N;
  int M=1;
  int F=1;
  while(M!=N){
  M=M+1;
  F=F*M;
}
  cout <<"valor final"<< F << endl; 
return 0;
}
