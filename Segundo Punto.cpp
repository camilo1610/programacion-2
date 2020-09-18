#include <iostream>
using namespace std;
class Serie
{
	private:
		string titulo;
		string genero;
		string estado;
		int Dia,Mes,Anio,numerotemporada;
	public:
		Serie(string _titulo, string _genero, int _numerotemporada,string _estado, int _Dia, int _Mes, int _Anio);
		Serie(string _titulo,int _Dia, int _Mes, int _Anio);
		void MostrarInfo ();
		void MostrarInfo2 ();
};
Serie::Serie(string _titulo, string _genero, int _numerotemporada,string _estado, int _Dia, int _Mes, int _Anio)
{
	titulo=_titulo;
	genero=_genero;
	numerotemporada=_numerotemporada;
	estado=_estado;
	Dia=_Dia;
	Mes=_Mes;
	Anio=_Anio;
}
Serie::Serie(string _titulo, int _Dia, int _Mes, int _Anio)
{
	titulo=_titulo;
	Dia=_Dia;
	Mes=_Mes;
	Anio=_Anio;
}
void Serie::MostrarInfo()
{
	cout<<"Titulo: "<<titulo<<endl;
	cout<<"Genero: "<<genero<<endl;
	cout<<"Numero de temporadas: "<<numerotemporada<<endl;
	cout<<"Estado: "<<estado<<endl;
	cout<<"Fecha: "<<Dia<<"/"<<Mes<<"/"<<Anio<<endl;
}
void Serie::MostrarInfo2()
{
	cout<<"\nTitulo: "<<titulo<<endl;
	cout<<"Fecha: "<<Dia<<"/"<<Mes<<"/"<<Anio<<endl;
}
int main()
{
	Serie serieA= Serie("DragonBall","Anime",5,"Entregado",12,06,2000);
	Serie serieB= Serie("Naruto",12,06,2000);
	serieA.MostrarInfo();
	serieB.MostrarInfo2();
	
	return 0;
}
