#include <stdio.h>
#include <math.h>
#include <iostream>
#include <unistd.h>
#include <cstdlib>

using namespace std;
int main(){
  int ivalor =20;
  int icontador =0;
  int i =0;
  cout <<"+--------------- programa HILO -----------------------------------+"<< endl;
  for (i= 1; i<= ivalor; i++){

  icontador+=i;
  cout <<"ciclo for i = "<< icontador << endl;
  

 
  }  
  cout << "+=====> Llamda al otro programa ==========="<< endl;
  system("./holamundo");
  cout << "+---------------- fin programa --------------------------+"<< endl;
 return 0;
}
