//Este es mi forma de retomar c++ desde ya haberlo aprendido hasta dominarlo.
//Dia 3
//En esta Clase veremos sobre operadores.

//iniciamos nuestro programa como ya sabemos :3

#include <iostream>
using namespace std;

//______________________________OPERADORES_________________________________
/* Los operadores son simbolos que nos van a ayudar a hacer operaciones
entre datos y variables.

Los hay de varios tipo:
    ->Aritmeticos
    ->Relacionales (comparacion)
    ->Logicos
    ->De asignacion
    ->Incremento y decremento
    ->De bit a bit (lo veremos mas tarde)

    Vamonos a nuestro Main */


int main() {

	//vamos a trabajar con dos variables enteras llamadas a y b con valores de prueba
	int a=5;
	int b=10;
	//___________________________OPERADORES ARITMETICOS_______________________
	/* En c++ tenemos los siguiente operadores aritmeticos
	    + Que representa la Suma
	    - Que representa la resta
	    * Que representa la multiplicacion (cuando esta entre 2 valores o variables)
	    / Que representa Division entera (solo la parte entera de una division)
	    % Modulo (representa el residuo de una division entera)
	*/

	//VEAMOS QUE PASA EN TERMINAL
	cout <<"Operaciones Aritmeticas"<<endl;
	cout << "Suma: " << a + b << endl;
	cout << "Resta: " << a - b << endl;
	cout << "Multiplicacion: " << a * b << endl;
	cout << "Division: " << a / b << endl;   // Ojo: division entera
	cout << "Modulo (resto): " << a % b << endl;

	//__________________________OPERADORES RELACIONALES_______________________
	/* En c++ tenemos los siguientes operadores relacionales (comparacion)
	    == Que representa Igual (esto es igual a esto?)
	    != Que representa diferente (esto es diferente de esto?)
	    < Mayor que ...
	    > Menor que ...
	    <= Mayor o igual que...
	    >= Menor o igual que...
	NOTA: No confundamos == con =. == Funciona para comparar la igualdad de una
	cosa con otra, mientras que = funciona para asignar un valor a una  variable

	Los operadores nos devolveran 1 si el resultado es verdadero o 0 si es falso
	*/

	//VEAMOS QUE PASA EN TERMINAL
	cout<<"Operaciones Relacionales"<<endl;
	cout << (a == b) << endl;  // Igual
	cout << (a != b) << endl;  // Diferente
	cout << (a > b) << endl;   // Mayor que
	cout << (a < b) << endl;   // Menor que
	cout << (a >= b) << endl;  // Mayor o igual
	cout << (a <= b) << endl;  // Menor o igual

	// Vamos a trabajar con valores booleanos (1 o 0 (true o false))
	// declaramos dos variables booleanas llamadas "x" y "y" con valores de prueba
	bool x = true;
	bool y = false;

	//_______________________OPERADORES LOGICOS_____________________________
	/* En c++ tenemos los siguientes operadores logicos
	    && Que representa el operador logico AND
	    || (ALT+124) Que representa el operador logico OR
	    ! Que representa el operador logico NOT
	NOTA: Los operadores logicos nos van a devolver valores booleanos.
	Sobre estos operadores podemos crear operaciones logicas mas complejas.*/

	//VEAMOS QUE PASA EN TERMINAL
	cout<<"Operaciones Logicas"<<endl;
	cout << (x && y) << endl; // AND
	cout << (x || y) << endl; // OR
	cout << (!x) << endl;     // NOT
	
	//_____________________OPERADORES DE ASIGNACION_________________________
	/* En c++ tenemos los siguientes operaciones de asignacion 
	    = asignamos un valor 
	    += asignamos el valor original incrementado
	    -= asignamos el valor original decrementado
	    *= asignamos el valor original multiplicado
	    /= asignamos el valor original dividido de forma entera 
	 */
	 
	 //Recordemos nuestras variables asignadas previamente a y b 

	//VEAMOS QUE PASA EN TERMINAL
	cout<<"Operadores de Asignacion"<<endl;
	
	a=20;
	cout << "= " << a  << endl;
	
	a += 2;  // a = a + 2
	cout << "+= " << a  << endl;
	
    a -= 1;  // a = a - 1
    cout << "-= " << a  << endl;
    
    a *= 3;  // a = a * 3
    cout << "*= " << a  << endl;
    
    a /= 2;  // a = a / 2
    cout << "/= " << a  << endl;
    
    //_______________________INCREMENTO Y DECREMENTO_________________________
    /* En c++ tenemos los siguientes valores de incremento y decremento 
        ++ incrementa tu variable en 1 
        -- decrementa tu variable en 1
    */
    
    //VEAMOS QUE PASA EN TERMINAL 
    cout<<"Operadores de incremento y decremento"<<endl;
    b=10;
    
    b++;
    cout << "++ " << b << endl;
    
    b--;
    cout << "-- " << b << endl;
}

// Julian Santuario Clase 2











