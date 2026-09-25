//========================CLASE EXPRESS DE CLASSES ============================
//Julian Emiliano Santuario Romero
/*
    Un tipo de dato es una especie de clase. Solo que a estas les ponemos acciones.

    Un objeto es un tipo de dato al cual le podemos hacer cositas

    Una clase necesita: Una definicion (archivo h) y una implementacion (archivo cpp)

    Imagina a las clases como bibliotecas propias.
        Debes incluirlas en tu main con #include "TuClase.h" (solo el archivo h)

    Nota tecnica: hay partes del programa que se ejecutan y cargan antes que otras
        *bibliotecas
        *variables globales
        *namespaces

    Palabra mamona: "Instancia" xd una "instancia" de una clase es solo un objeto que
    creamos apartir de ella. :v

===============================================================================*/

//====================CREAR TIPOS DE DATOS (sin usar clases)===================
//===========================Solo para entender mejor==========================
//=============================Pero si usa clases :3 ==========================
/* Una de las formas de crear tipos de datos propios sin usar clases son los structs o
estructuras. Sirven para organizar informacion propia que cumpla con ciertas caracteristicas

Nos ayuda a no revolver informacion.

Ordenar codigo

Su diferencia de las clases es que solo usan atributos y no metodos

Pero estamos creando objetos con caracteristicas*/

#include <string>
#include <iostream>
using namespace std;

struct Auto { //Definicion del dato

	//Aqui van las caracteristicas (las declaramos como si fueran variables)
	string marcaAuto;
	int anio;
	float precio;

}; //no olvidemos el punto y coma.

//Se definen fuera del main.

int main() {

	//Creamos por decirlo asi nuestro objeto
	//tipo de dato y nombre que le damos al objeto.
	Auto autoDeLujo;

	//el objeto ya se creo pero dale play.
	cout<<"La marca es: "<< autoDeLujo.marcaAuto<<endl;
	cout<<"El anio es: "<< autoDeLujo.anio<<endl;
	cout<<"El precio es: "<< autoDeLujo.precio<<endl;
	// para acceder a sus caracteristicas pon tuObjeto.caracteristica
	
	//ahora nos deberia mandar numeros raros porque no le pusimos ningun valor

	//vamos a crear otro objeto.
	cout<<"\n"; //es un salto de linea alt+92 y una n

	//creamos el objeto

	Auto autoNormalito; //objeto creado

	//para modificar sus valores ponemos
	autoNormalito.marcaAuto="toyota";
	autoNormalito.anio=2003; //hay que respetar el tipo de dato definido
	autoNormalito.precio=150000;

	//mostramos en pantalla
	cout<<"La marca es: "<< autoNormalito.marcaAuto<<endl;
	cout<<"El anio es: "<< autoNormalito.anio<<endl;
	cout<<"El precio es: "<< autoNormalito.precio<<endl;

	return 0 ;
}

//asi es como funcionan los objetos y sus caracteristicas
//una clase es parecida pero tener miedo










