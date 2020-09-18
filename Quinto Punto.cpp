#include <iostream>
using namespace std;
class Producto
{
	private:
		string tienda,vendedor,color;
		float Peso,Precio,Altura,Ancho,ConsumoE; 
	public:
		Producto(string _tienda, string _vendedor,string _color, float _Precio, float _Peso ,float _Altura, float _Ancho, float _ConsumoE);//Todos los datos.
		Producto(string _tienda, string _vendedor,string _color,float _Precio, float _Altura, float _Ancho);//tienda Vendedor Color Precio Altura y Ancho.
		Producto(string _tienda, string _vendedor,float _Precio,float _ConsumoE);//tienda Vendedor Precio Consumo energetico.
		Producto(string _tienda, string _vendedor,float _Precio);//tienda vendedor y precio.
		//Mostrar Informacion 1
		void MostrarInfo1 ();
		//Mostrar Informacion 2
		void MostrarInfo2 ();
		//Mostrar Informacion 3
		void MostrarInfo3 ();
		//Mostrar Informacion 4
		void MostrarInfo4 ();
		//tienda
		void settienda(string _tienda);
		string gettienda();
		//vendedor
		void setvendedor(string _vendedor);
		string getvendedor();
		//color
		void setcolor(string _color);
		string getcolor();
		//Peso
		void setPeso(float _Peso);
		float getPeso();
		//Precio
		void setPrecio(float _Precio);
		float getPrecio();
		//Altura
		void setAltura(float _Altura);
		float getAltura();
		//Ancho
		void setAncho(float _Ancho);
		float getAncho();
		//Consumo energetico.
		void setConsumoE(float _ConsumoE);
		float getConsumoE();
};
//Constructor 1
Producto::Producto(string _tienda, string _vendedor,string _color, float _Precio,float _Peso, float _Altura, float _Ancho, float _ConsumoE)//Todos los datos.
{
	tienda=_tienda;
	vendedor=_vendedor;
	color=_color;
	Precio=_Precio;
	Peso=_Peso;
	Altura=_Altura;
	Ancho=_Ancho;
	ConsumoE=_ConsumoE;
}
//Constructor 2
Producto::Producto(string _tienda, string _vendedor,string _color,float _Precio,float _Altura, float _Ancho)//Tienda Vendedor Color Precio Altura y Ancho.
{
	tienda=_tienda;
	vendedor=_vendedor;
	color=_color;
	Precio=_Precio;
	Altura=_Altura;
	Ancho=_Ancho;
}
//Constructor 3
Producto::Producto(string _tienda, string _vendedor,float _Precio,float _ConsumoE)//Tienda Vendedor Precio Consumo energetico.
{
	tienda=_tienda;
	vendedor=_vendedor;
	Precio=_Precio;
	ConsumoE=_ConsumoE;
}
//Constructor 4
Producto::Producto(string _tienda, string _vendedor,float _Precio)//tienda vendedor y precio.
{
	tienda=_tienda;
	vendedor=_vendedor;
	Precio=_Precio;
}
//Mostrar Informacion 1
void Producto::MostrarInfo1()
{
	cout<<"La tienda es: "<<tienda<<endl;
	cout<<"El vendedor es: "<<vendedor<<endl;
	cout<<"El color es: "<<color<<endl;
	cout<<"El Peso es: "<<Peso<<endl;
	cout<<"El Precio es: "<<Precio<<endl;
	cout<<"El Altura: "<<Altura<<endl;
	cout<<"El Ancho: "<<Ancho<<endl;
	cout<<"El Consumo energetico es: "<<ConsumoE<<endl;
}
//Mostrar Informacion 2
void Producto::MostrarInfo2()
{
	cout<<"La tienda es: "<<tienda<<endl;
	cout<<"El vendedor es: "<<vendedor<<endl;
	cout<<"El color es: "<<color<<endl;
	cout<<"El Precio es: "<<Precio<<endl;
	cout<<"El Altura: "<<Altura<<endl;
	cout<<"El Ancho: "<<Ancho<<endl;
}
//Mostrar Informacion 3
void Producto::MostrarInfo3()
{
	cout<<"La tienda es: "<<tienda<<endl;
	cout<<"El vendedor es: "<<vendedor<<endl;
	cout<<"El Precio es: "<<Precio<<endl;
	cout<<"El Consumo energetico es: "<<ConsumoE<<endl;
}
//Mostrar Informacion 4
void Producto::MostrarInfo4()
{
	cout<<"La tienda es: "<<tienda<<endl;
	cout<<"El vendedor es: "<<vendedor<<endl;
	cout<<"El Precio es: "<<Precio<<endl;
}
//tienda
void Producto::settienda(string _tienda)
{
	tienda=_tienda;
}
string Producto::gettienda()
{
	cout<<"La tienda es: "<<tienda<<endl;
	return tienda;
}
//vendedor
void Producto::setvendedor(string _vendedor)
{
	vendedor=_vendedor;
}
string Producto::getvendedor()
{
	cout<<"El vendedor es: "<<vendedor<<endl;
	return vendedor;
}
//color
void Producto::setcolor(string _color)
{
	color=_color;
}
string Producto::getcolor()
{
	cout<<"El color es: "<<color<<endl;
	return color;
}
//Peso
void Producto::setPeso(float _Peso)
{
	Peso=_Peso;
}
float Producto::getPeso()
{
	cout<<"El Peso es: "<<Peso<<endl;
	return Peso;
}
//Precio
void Producto::setPrecio(float _Precio)
{
	Precio=_Precio;
}
float Producto::getPrecio()
{
	cout<<"El Precio es: "<<Precio<<endl;
	return Precio;
}
//Altura
void Producto::setAltura(float _Altura)
{
	Altura=_Altura;
}
float Producto::getAltura()
{
	cout<<"El Altura: "<<Altura<<endl;
	return Altura;
}

//Ancho
void Producto::setAncho(float _Ancho)
{
	Ancho=_Ancho;
}
float Producto::getAncho()
{
	cout<<"El Ancho: "<<Ancho<<endl;
	return Ancho;
}
//Consumo energetico
void Producto::setConsumoE(float _ConsumoE)
{
	ConsumoE=_ConsumoE;
}
float Producto::getConsumoE()
{
	cout<<"El Consumo energetico es: "<<ConsumoE<<endl;
	return ConsumoE;
}
int main()
{
	Producto ProductoA= Producto("Asus","Carlos","Negro",2330,5,10,16.5,277);
	ProductoA.MostrarInfo1();
	ProductoA.setvendedor("Juan");
	ProductoA.getvendedor();
	return 0;
}
	
