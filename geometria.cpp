# include <stdio.h>
# include <iostream>
using namespace std;
int main()
{
int vi_opcion = 1;
float vf_area = 0;
bool vb_opcion = false;
int vi_base = 0;
int vi_altura = 0;
int vi_radio = 0;

cout <<"\n";
cout <<"+--------------------------------------------------------+\n";
cout <<"| programa para calcular el area de un figura geometrica |\n";
cout <<"| realizado por Jorge Hernando Ramirez Cortes            |\n";
cout <<"| 9/SEP  2021. Universidad Cooperativa de Colombia       |\n";
cout <<"| 14/OCT 2021 rename and add fragment code               |\n";
cout <<"+--------------------------------------------------------+\n";
cout <<"\n";

cout <<"Seleccionar una opcion geometrica para calcular el aera\n";
cout <<"Circulo   [1] por defecto\n";
cout <<"Triangulo [2] \n";
cout <<"Cuadrado  [3]\n";
cout <<"[1]:";

cout << "Opcion por defecto = 1";
//cin >> vi_opcion;
vi_opcion = 1;

cout << "Usted ingreso: " << vi_opcion << endl;

if (vi_opcion < 1) {
	vi_opcion = 1;
	vb_opcion = true;
}else if (vi_opcion > 3){
	vi_opcion = 1;
	vb_opcion = true;
}

if (vi_opcion){
	cout << "ingreso una opcion fuera del rango, se asigna por defecto 1\n";
}

switch(vi_opcion){
	case 1:
		//circulo
		cout << "ingrese el radio del circulo : ";
		//cin >> vi_radio;
		vi_radio = 3;
		cout << "\n";
		vf_area = (vi_radio * vi_radio) * 3.14141692;
		break;
	case 2:
		//Triangulo
		cout << "ingreser la altura : ";
		cin >> vi_altura;
		cout << "\n";
		
		cout << "ingrese la base : ";
		cin >> vi_base;
		cout << "\n";

		vf_area = (vi_base * vi_area)/2;
		break;
	default:
		//cuadrado
		cout << "ingrese lungitud de la base : ";
		cin >> vi_base;
		cout << "\n";

		vf_area = vi_base * vi_base;
		break; 
}
cout << "la area es => "<< vf_area << endl;
return 0;
}

