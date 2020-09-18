#include <iostream>
using namespace std;
class Automovil
{
	private:
		string modelo,matricula,color,AireAcondicionado;
		float NumeroPuertas,NumeroPasajeros;
	public:
		Automovil(string _modelo, string _matricula,string _color,string _AireAcondicionado, float _NumeroPasajeros, float _NumeroPuertas);//Todos los datos
		Automovil(string _modelo, string _matricula,string _color,string _AireAcondicionado);//modelo matricula Color
		void MostrarInformacion();
		void MostrarInformacion2();
		//modelo
		void setmodelo(string _modelo);
		string getmodelo();
		//matricula
		void setmatricula(string _matricula);
		string getmatricula();
		//color
		void setcolor(string _color);
		string getcolor();
		//NumeroPuertas
		void setNumeroPuertas(float _NumeroPuertas);
		float getNumeroPuertas();
		//NumeroPasajeros
		void setNumeroPasajeros(float _NumeroPasajeros);
		float getNumeroPasajeros();
		//Aire acondicionado
		void setAireAcondicionado(string _AireAcondicionado);
		string getAireAcondicionado();
		
	
};
//Constructor 
Automovil::Automovil(string _modelo, string _matricula,string _color,string _AireAcondicionado, float _NumeroPasajeros,float _NumeroPuertas)//Todos los datos pendiente Aire acondicionado.
{
	modelo=_modelo;
	matricula=_matricula;
	color=_color;
	AireAcondicionado=_AireAcondicionado;
	NumeroPasajeros=_NumeroPasajeros;
	NumeroPuertas=_NumeroPuertas;
}

//Constructor 2
Automovil::Automovil(string _modelo, string _matricula,string _color,string _AireAcondicionado)//modelo matricula Color.
{
	modelo=_modelo;
	matricula=_matricula;
	color=_color;
	AireAcondicionado=_AireAcondicionado;
}
//imprimir informacion
void Automovil::MostrarInformacion()
{
	cout<<"\nModelo: "<<modelo<<endl;
	cout<<"La matricula es: "<<matricula<<endl;
	cout<<"Color: "<<color<<endl;
	cout<<"Aire Acondicionado: "<<AireAcondicionado<<endl;
	cout<<"Numero de Pasajeros: "<<NumeroPasajeros<<endl;
	cout<<"Numero de Puertas: "<<NumeroPuertas<<"\n"<<endl;
}
void Automovil::MostrarInformacion2()
{
	cout<<"\nModelo: "<<modelo<<endl;
	cout<<"La matricula es: "<<matricula<<endl;
	cout<<"Color: "<<color<<endl;
	cout<<"Aire Acondicionado: "<<AireAcondicionado<<endl;
}
//modelo
void Automovil::setmodelo(string _modelo)
{
	modelo=_modelo;
}
string Automovil::getmodelo()
{
	cout<<"Modelo: "<<modelo<<endl;
	return modelo;
}
//matricula
void Automovil::setmatricula(string _matricula)
{
	matricula=_matricula;
}
string Automovil::getmatricula()
{
	cout<<"La matricula es: "<<matricula<<endl;
	return matricula;
}
//color
void Automovil::setcolor(string _color)
{
	color=_color;
}
string Automovil::getcolor()
{
	cout<<"Color: "<<color<<endl;
	return color;
}
//Aire acondicionado
void Automovil::setAireAcondicionado(string _AireAcondicionado)
{
	AireAcondicionado=_AireAcondicionado;
}
string Automovil::getAireAcondicionado()
{
	cout<<"Aire Acondicionado: "<<AireAcondicionado<<endl;
	return AireAcondicionado;
}
//Numero Pasajeros
void Automovil::setNumeroPasajeros(float _NumeroPasajeros)
{
	NumeroPasajeros=_NumeroPasajeros;
}
float Automovil::getNumeroPasajeros()
{
	cout<<"Numero de Pasajeros: "<<NumeroPasajeros<<endl;
	return NumeroPasajeros;
}
//Numero Puertas
void Automovil::setNumeroPuertas(float _NumeroPuertas)
{
	NumeroPuertas=_NumeroPuertas;
}
float Automovil::getNumeroPuertas()
{
	cout<<"Numero de Puertas: "<<NumeroPuertas<<endl;
	return NumeroPuertas;
}
int main()
{
	Automovil AutomovilA= Automovil("B-Max","NCX-325","Azul","Si",4,5);
	AutomovilA.MostrarInformacion();
	AutomovilA.setNumeroPasajeros(3);
	AutomovilA.getNumeroPasajeros();
	Automovil Automovil2= Automovil("MFZ","MMN-323","Rojo","No");
	Automovil2.MostrarInformacion2();
	Automovil2.setAireAcondicionado("Si");
	Automovil2.getAireAcondicionado();
	return 0;
}
