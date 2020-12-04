/*Este programa solicita valores al usuario y muestra en la salida est�ndar el resultado de la espresi�n
matem�tica: (a+(b/c))/(d+(e/f)) con una precisi�n de 2 decimales*/

# include <iostream> //Librer�a est�ndar de entrada y salida de datos
#include <locale.h> //Librer�a est�ndar de localizaci�n (regionalizaci�n)

using namespace std;

main (){ //Inicio del programa
	setlocale(LC_CTYPE, "Spanish");
	float a,b,c,d,e,f, operacion = 0; //Declaramos las variables a utilizar y la variable que realizar� la operaci�n, esta �ltima la iniciamos en 0.
	cout<<"Ingrese el valor de a: "<<endl; //Solicitamos el valor de "a".
	cin>>a;
	cout<<"Ingrese el valor de b: "<<endl; //Solicitamos el valor de "b".
	cin>>b;
	cout<<"Ingrese el valor de c: "<<endl; //Solicitamos el valor de "c".
	cin>>c;
	cout<<"Ingrese el valor de d: "<<endl; //Solicitamos el valor de "d".
	cin>>d;
	cout<<"Ingrese el valor de e: "<<endl; //Solicitamos el valor de "e".
	cin>>e;
	cout<<"Ingrese el valor de f: "<<endl; //Solicitamos el valor de "f".
	cin>>f;
	operacion = (a+(b/c))/(d+(e/f));
	cout.precision(2); //Damos a la salida de la operaci�n una precisi�n de 2 decimales
	cout<<"El resultado de la operaci�n (a+(b/c))/(d+(e/f)) es: "<<endl;
	cout<<operacion;
	
	return 0; //Fin del programa
}

/*Este programa fue escrito por Emilio Carca�o Bringas*/
