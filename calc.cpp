#include <iostream>
#include <limits>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	string lol;
	char opera;
	float num, acu, cont, pot, raiz;

	//Este es un programa que realiza las operaciones de suma, resta, multiplicacion y division.
	cont=1;
	cout<< "Signos para las operaciones:\n";
	cout<<"1. Suma '+'\n";
	cout<<"2. Resta '-'\n";
	cout<<"3. Multiplicacion '*'\n";
	cout<<"4. Division '/'\n";
	cout<<"5. Raiz '^'\n";
	cout<<"Para utilizar la raiz, el programa pedira un exponente(1 si no esta elevado) y la raiz(1 si no esta elevado)";
	cout<<"Introduzca '=' para terminar la operacion y empezar otra.\n";
	cout<<"Introduzca 'x' para cerrar el programa.\n";
	cout<<"Introduzca la cantidad a operar ";
	while (!(cin>> num))
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout<< "Error, el valor introducido no es valido, porfavor introduzca un numero.\n";
	}
	acu=num;
	cout<<"Introduzca el operador, seguido de la cantidad a operar \n = "<<acu ;
	while (cont <= 10)
	{
		cin>> opera;
		switch (opera)
		{
			case '+':
				while (!(cin>> num))
				{
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					cout<< "Error, el valor introducido no es valido, porfavor introduzca un numero.\n";
				}
				acu=acu+num;
				cout<<" = "<<acu;
				break;
			case '-':
			while (!(cin>> num))
				{
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					cout<< "Error, el valor introducido no es valido, porfavor introduzca un numero.\n";
				}
				acu=acu-num;
				cout<<" = "<<acu;
				break;
			case '*':
				while (!(cin>> num))
				{
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					cout<< "Error, el valor introducido no es valido, porfavor introduzca un numero.\n";
				}
				acu=acu*num;
				cout<<" = "<<acu;
				break;
			case '/':
				while (!(cin>> num))
				{
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					cout<< "Error, el valor introducido no es valido, porfavor introduzca un numero.\n";
				}
				acu=acu/num;
				cout<<" = "<<acu;
				break;
			case '^':
				cout<<"Potencia(exponente) ";
				while (!(cin>>pot))
				{
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					cout<< "Error, el valor introducido no es valido, porfavor introduzca un numero.\n";
				}
				cout<<"Raiz ";
				while (!(cin>>raiz))
				{
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					cout<< "Error, el valor introducido no es valido, porfavor introduzca un numero.\n";
				}
				acu=pow(acu,(pot/raiz));
				cout<<" = "<<acu;
				break;
			case '=':
				cout<<"= "<<acu<<"\n";
				acu=0;
				cout<<"= "<<acu<<"\n";
				cout<<"Introduzca la cantidad a operar ";
				while (!(cin>> num))
				{
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					cout<< "Error, el valor introducido no es valido, porfavor introduzca un numero.\n";
				}
				acu=num;
				break;
			case 'x':
				cont=11;
				cout<<"Presiono salir del programa";
				break;
			default:
				cout<<"Error, esto no es un operador habil, introduzca un operador nuevamente. \n";
				cout<<" = "<<acu;
				break;
		}
	}

	getline(cin, lol);
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	return 0;
}
