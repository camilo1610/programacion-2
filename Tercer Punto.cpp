#include <iostream>
using namespace std;
class Cliente {
	
	private: //Atributos
		string nombre;
		string apellido;
		string tipocliente;
		int cedula;
		int celular;
	public:  //Metodos
		Cliente(string _tipocliente,string _nombre,string _apellido,int _cedula,int _celular);
		void seleccionarcliente();
		void settipocliente(string _tipocliente);
		string gettipocliente();
		//
		void insertarCliente();
		//Editar Cliente
		void setnombre(string _nombre);
		string getnombre();
		void setapellido(string _apellido);
		string getapellido();
		void setcedula(int _cedula);
		int getcedula();
		void setcelular(int _celular);
		int getcelular();
		
		~Cliente();
};
Cliente::Cliente(string _tipocliente,string _nombre,string _apellido,int _cedula,int _celular)
{
	tipocliente= _tipocliente;
	nombre=_nombre;
	apellido=_apellido;
	cedula=_cedula;
	celular=_celular;
}
void Cliente::seleccionarcliente()
{
	cout<<"Usted selecciono cliente:"<<tipocliente<<endl;
}

void Cliente::settipocliente(string _tipocliente)
{
	tipocliente=_tipocliente;
}
string Cliente::gettipocliente()
{
	cout<<"Tipo de Cliente: "<<tipocliente<<endl;
	return tipocliente;
}
//
void Cliente::insertarCliente()
{
	cout<<"Tipo de cliente: "<<tipocliente<<endl;
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"Apellido: "<<apellido<<endl;
	cout<<"Cedula: "<<cedula<<endl;
	cout<<"Celular: "<<celular<<endl;
	
}
//Editar Cliente-Get y Set.
void Cliente::setnombre(string _nombre)
{
	nombre=_nombre;
}
string Cliente::getnombre()
{
	cout<<"Nombre: "<<nombre<<endl;
	return nombre;
}
//
void Cliente::setapellido(string _apellido)
{
	apellido=_apellido;
}
string Cliente::getapellido()
{
	cout<<"apellido: "<<apellido<<endl;
	return apellido;
}
//
void Cliente::setcedula(int _cedula)
{
	cedula=_cedula;
}
int Cliente::getcedula()
{
	cout<<"cedula: "<<cedula<<endl;
	return cedula;
}
//
void Cliente::setcelular(int _celular)
{
	celular=_celular;
}
int Cliente::getcelular()
{
	cout<<"celular: "<<celular<<endl;
	return celular;
}
//Destructor
Cliente::~Cliente(){}

int main() 
{
	Cliente Transaccion = Cliente("Natural","Sebas","rivera",1010113213,312212123);
	Transaccion.insertarCliente();
	Transaccion.setnombre("Camilo");
	cout<<endl;
	Transaccion.getnombre();
	Transaccion.settipocliente("Juridico");
	Transaccion.gettipocliente();
	
	return 0;
}
