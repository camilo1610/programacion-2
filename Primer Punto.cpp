#include <iostream>
using namespace std;
class Rectangulo
{
	private:
		float base,altura;		
	public:
		Rectangulo(float _base,float _altura); //constructor
		void Perimetro();
		void Area();
};
Rectangulo::Rectangulo(float _base,float _altura)
{
	base= _base;
	altura= _altura;
}
void Rectangulo::Perimetro()
{
	float _Perimetro= 2*(base+altura);
	cout<<"El Perimetro del rectangulo es: "<<_Perimetro<<endl;
}
void Rectangulo::Area()
{
	float _Area= base*altura;
	cout<<"El Area del rectangulo es: "<<_Area<<endl;
}
	
int main() 
{
	Rectangulo rectanguloA= Rectangulo(4,3);
	rectanguloA.Perimetro();
	rectanguloA.Area();
	return 0;
}
