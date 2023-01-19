#include <iostream>
using namespace std;
int main()
{
float dinero,peso,dist,cant;
int opcion,tr,tp,td;
	 cout<<"presione 1 para hacer coversion de dinero"<<endl;
	cout<<"presione 2 para hacer conversion de pesos "<<endl;
	cout<<"presione 3 para hacer conversion de distancia "<<endl;
	cin>>opcion;
		cout<<"por favor ingrese la cantida que usted desea convertir(dinero,kg o km)";
	cin>>cant;
	
	switch(opcion)
	
{

		case 1 :cout<< "usted ha elegido hacer la conversion de dinero"<<endl;
		cout<< "a que moneda desea cambiar?"<<endl;
			cout<< "1.-bolivares,2. dolares, 3.  colombianos,4.- argentinos, 5. -euros"<<endl;
			cin>>tr;
		switch (tr)
	{
		case 1:cout<<"en total pesos son "<< cant*1.05<<" bolivares"<<endl;
		break;
		case 2:cout<<"en total pesos son "<< cant*0.53<<" dolares"<<endl;
		break;
		case 3:cout<<"en total pesos son "<< cant*248.52<<" pesos colombianoss"<<endl;
		break;
		case 4:cout<<"en total pesos son "<< cant*9.66<<" pesos argentinos"<<endl;
		break;
		case 5:cout<<"en total pesos son "<< cant*0.049<<" euros"<<endl;
		break;
		break;
		
	
}

	 
		case 2: cout<<"usted ha elegido hacer una conversion de pesos(kg.oz...etc)"<<endl;
			cout<< "a que peso desea cambiar?"<<endl;
			cout<< "1.-toneladas,2. onzass, 3. libras,4.- microgramos, 5.-teragramos"<<endl;
			cin>>tp;
		switch (tp)
	{
		case 1:cout<<"en total kg son "<< cant*0.001<<" toneladas"<<endl;
		break;
		case 2:cout<<"en total kg son "<< cant*35.274<<" onzas"<<endl;
		break;
		case 3:cout<<"en total kg son "<< cant*2.20462<<" libras"<<endl;
		break;
		case 4:cout<<"en total kg son "<< cant*1000000000<<" microgramos"<<endl;
		break;
		case 5:cout<<"en total kg son "<< cant/1000000000<<" teragramos"<<endl;
		break;
		break;
	
	
}



		case 3:cout<<"usted ha elegido hacer una conversion de distancias"<<endl;
		cout<< "a que distancia desea cambiar?"<<endl;
			cout<< "1.-pulgadas,2. pies, 3. centimetros,4.- nanometros, 5.-años luz"<<endl;
			cin>>td;
		switch (td)
	{
		case 1:cout<<"en total km son "<< cant*39370.1<<" pulgadas"<<endl;
		break;
		case 2:cout<<"en total km son "<< cant*3280.84<<" pies"<<endl;
		break;
		case 3:cout<<"en total km son "<< cant*100000<<" centimetros"<<endl;
		break;
		case 4:cout<<"en total km son "<< cant*1000000000000<<" nanometros"<<endl;
		break;
		case 5:cout<<"en total km son "<< cant*1.0570008000000003<<" años luz"<<endl;
		break;
	break;
	break;
		default: cout<<"opcion incorrecta";
		break;
	}
}
	

}

