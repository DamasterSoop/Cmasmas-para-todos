//==========================   PROYECTO 1   =================================
/* Ya que tenemos bases solidas de los temas anteriores vamos a ponerlo a
prueba con un proyecto pequenio*/

#include <iostream>
using namespace std;


string nombre;
int edad;
float estatura;
bool inscrito;


//============== FUNCIONES ===============

int menu() {

	int opcionElegida=0;

	cout << "================== Menu ================"<<endl;
	cout << "= Modificar datos (0)                  ="<<endl;
	cout << "= Operacion matematica (1)             ="<<endl;
	cout << "= Salir (2)                            ="<<endl;
	cout << "========================================"<<endl;
	cout <<endl;

	cout <<  "Opcion: ";
	cin >> opcionElegida;
	cout << endl;

	return opcionElegida;
}

int subMenu() {
	int opcionElegida=0;

	cout<<endl;
	cout << "=========== Menu matematicas ==========="<<endl;
	cout << "= 1: Suma                              ="<<endl;
	cout << "= 2: Resta                             ="<<endl;
	cout << "= 3: multiplicacion                    ="<<endl;
	cout << "========================================"<<endl;
	cout <<endl;

	cout <<  "Opcion: ";
	cin >> opcionElegida;
	cout << endl;

	return opcionElegida;
}

void pedirDatos() {
	cout << "Cual es su nombre? " << endl;
	cin >> nombre;
	cout << "Cual es su edad? " << endl;
	cin >> edad;
	cout << "Cual es su estatura (en metros) ? " << endl;
	cin >> estatura;
	cout << "Esta incrito? (1 si, 0 no) " << endl;
	cin >> inscrito;
}

void suma( int A, int B) {
	cout<<"La suma de "<< A << " y " << B << " es igual a " << A+B <<endl;
}

void resta( int A, int B) {
	cout<<"La resta de "<< A << " y " << B << " es igual a " << A-B <<endl;
}

void multiplicacion( int A, int B) {
	cout<<"La multiplicacion de "<< A << " y " << B << " es igual a " << A*B \
	    <<endl;
}

//=========================================


int main() {

	cout << "Bienvenido, porfavor escriba sus datos acontinuacion" <<endl;
	pedirDatos();

	cout << "gracias "<<nombre<<endl;


	int opcion=0;

	if (inscrito==1) {

		while (opcion!=2) {
			opcion = menu();

			switch (opcion) {

			case 0:
				pedirDatos();
				break;

			case 1:
				opcion =subMenu();

				int A;
				int B;

				switch (opcion) {
				case 1:
					cout << "Digite el primer numero: "<<endl;
					cin>>A;

					cout << "Digite el segundo numero: "<<endl;
					cin>>B;

					suma(A,B);
					break;

				case 2:
					cout << "Digite el primer numero: "<<endl;
					cin>>A;

					cout << "Digite el segundo numero: "<<endl;
					cin>>B;

					resta(A,B);
					break;

				case 3:
					cout << "Digite el primer numero: "<<endl;
					cin>>A;

					cout << "Digite el segundo numero: "<<endl;
					cin>>B;

					multiplicacion(A,B);
					break;

				default:
					cout << "opcion invalida"<<endl;
					break;

				}

			}
		}

	} else {

		cout << "Lo sentimos debe estar inscrito"<<endl;

	}

	cout << "Hasta pronto " << nombre;

	return 0;
}
