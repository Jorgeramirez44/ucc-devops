#include <math.h>
#include <iostream>
  
using namespace std;

 
 
int 
main () 
{
  
 
 
int opcion = 1;
  
 
float area = 0;
  
 
bool vb_opcion = false;
  
float PI = 3.1416;
  
 
int base = 0;
  
 
int altura = 0;
  
 
int radio = 0;
  
 
int resultado = 0;
  
 
 
cout << "Jorge Hernando Ramirez Cortes 504756\n";
  
 cout <<"Seleccionar una opcion geometrica para calcular el area\n";
 
cout << "Circulo   [1] por defecto\n";
  
 
cout << "Cuadrado [2] \n";
  
 
cout << "Triangulo  [3] \n";
  
 
cout << "--------->:";
  
 
cin >> opcion;
  
 
cout << "Usted ingreso: " << opcion << endl;
  
 
 
if (opcion < 1)
    
    {
      
 
opcion = 1;
      
 
vb_opcion = true;
    
 
}
  
  else if (opcion > 3)
    
    {
      
 
opcion = 1;
      
 
vb_opcion = true;
    
 
}
  
 
if (vb_opcion)
    
    {
      
 
cout <<"Ingreso una opcion incorrecta, se asignara por defecto [1] :)\n";
    
 
}
  
 
 
switch (opcion)
    
    {
    
 
 
case 1:
      
 
 
 
 
 
cout << "ingresa el radio:";
      
cin >> radio;
      
resultado = (radio * radio) * PI;
      
 
 
cout << "El area de su circulo es: " << resultado << endl;
      
 
 
cout << "Jorge Hernando Ramirez Cortes - 504756\n";
    
 break;
 
case 2:
      
 
cout << "Ingrese el lado del cuadrado ";
      
 
 
cin >> base;
      
 
 
resultado = (base * 4);	// Formula matematica para calcular el area del triangulo.
      
cout << "El area de su cuadrado es: " << resultado << endl;
      
 
 
cout << "Jorge Hernando Ramirez Cortes - 504756\n";
      
 
break;
    
 
 
case 3:
      
 
cout << "Ingrese la base del triangulo: ";
      
 
 
cin >> base;
      
 
 
cout << "Ingrese la altura del triangulo: ";
      
 
 
cin >> altura;
      
 
 
resultado = (base * altura) / 2;	// Formula matematica para calcular el area del triangulo.
      
cout << "El area de su triangulo es: " << resultado << endl;
      
 
 
cout << "Jorge Hernando Ramirez Cortes - 504756\n";
      
 
break;
    
}

 
 
 
 
 
 
 
 
 
 
 
}

