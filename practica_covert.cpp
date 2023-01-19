#include <iostream>
using namespace std;
int main()
{
float cant,dinero,peso,dist;
	cout<<"presione 1 para hacer coversion de dinero"<<endl;
	cout<<"presione 2 para hacer conversion de pesos "<<endl;
	cout<<"presione 3 para hacer conversion de distancia "<<endl;
	int opcion=0;
	cin>>opcion;
	
	switch(opcion)
{

		case 1 :cout<< "usted ha elegido hacer la conversion de dinero ";
	 break;
		case 2: cout<<"usted ha elegido hacer una conversion de pesos(kg.oz...etc)";
	break;
		case 3:cout<<"usted ha elegido hacer una conversion de distancias";
	break;
		default: cout<<"opcion incorrecta";
		break;
	}
	cout<<"por favor ingrese la cantida que usted desea convertir(dinero,kg o km)";
	cin>>cant;
		switch(opcion)
{

		case 1 :cout<< "LAS CONVERSIONES DE SU DINERO SON LAS SIGUIENTES  "<<endl;
	cout<<"la cantidad de pesos mexicanos a bolivares son:  "<<cant*1.05<<endl;
		cout<<"la cantidad de pesos mexicanos a dolares son:  "<<cant*0.53<<endl;
			cout<<"la cantidad de pesos mexicanos a pesos colombianos son:  "<<cant*248.52<<endl;
				cout<<"la cantidad de pesos mexicanos a pesos argentinos son:  "<<	cant*9.66<<endl;
					cout<<"la cantidad de pesos mexicanos a euros son:  "<<cant*0.049<<endl;
	break;
	case 2 :cout<< "LAS CONVERSIONES DE SU PESO SOLICITADA SON LAS SIGUIENTES  "<<endl;
	cout<<"la cantidad de kg a toneladas son:  "<<cant*0.001<<endl;
		cout<<"la cantidad de kg a onzas son:  "<<cant*35.274<<endl;
			cout<<"la cantidad de kg a libras son:  "<<cant*2.20462<<endl;
				cout<<"la cantidad de kg a microgramos son:  "<<cant*1000000000<<endl;
					cout<<"la cantidad de kg a teragramo son:  "<<cant/1000000000<<endl;
	break;
		case 3 :cout<< "LAS CONVERSIONES DE SU DISTANCIA SOLICITADA SON LAS SIGUIENTES  "<<endl;
	cout<<"la cantidad de KM a pulgadas son:  "<<cant*39370.1<<endl;
		cout<<"la cantidad de KM a pies son:  "<<cant*3280.84<<endl;
			cout<<"la cantidad de KM a centimetros son:  "<<cant*100000<<endl;
				cout<<"la cantidad de KM a nanometros son:  "<<cant* 1000000000000<<endl;
					cout<<"la cantidad de KM a años luz son:  "<<cant*1.0570008000000003<<endl;	
	break;

	default: cout<<"opcion incorrecta";
	
	break;
	}
}
