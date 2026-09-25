//Este es mi forma de retomar c++ desde ya haberlo aprendido hasta dominarlo.
//Dia 2
//En esta clase vamos a aprender los tipos de dato y tipos de Variables.

//____________________________VARIABLES________________________________
/*Las variables en C++ son contenedores con nombre para almacenar datos en 
 la memoria, cuyo tipo debe declararse explícitamente.
 
 NOTA: En c++ Las variables en C++ deben declararse con un tipo de dato 
 específico y solo pueden almacenar valores de ese tipo durante su vida.
 
 Los nombres de VARIABLES son solo una forma de llamar a la ubicacion de cierto
 dato en la memoria ya que es mas facil referirnos con un nombre a una ubicacion
 virtual dentro de la memoria.
 ___________________________________________________________________________*/
 
#include <iostream>
using namespace std;


int variable; //este es un ejemplo de como declarar una variable 


//NOTA<------
/*          Aqui, le estamos diciendo al compilador
    Reserva espacio en la memoria para un numero entero (int) en 
    una direccion de memoria                                            */
    

//_________________________VARIABLES GLOBALES________________________________
/* Cuando declaramos una variable de cualquier tipo fuera de nuestra funcion
Main. Es una variable global 

Las variables globales son variables que viven durante todo el programa y se 
almacenan en la memoria global lo que permite acceder y modificarlas desde 
cualquier parte del programa. 

A diferencia de las locales, se inicializan automáticamente en cero si no se 
asignan y persisten durante toda la ejecución.

NOTA:------> No usar variables globales a menos de ser necesario 
Porque pueden causar:
    Dependencias ocultas
    Bugs difíciles de rastrear
    Problemas de mantenimiento
    (en otra sesion veremos mas a detalle su uso) */

float ejemploGlobal; 
//es un ejemplo de una variable global de tipo float (veremos los tipos en un momento)


int main(){
//_________________________VARIABLES LOCALES________________________________
/* Cuando declaramos una variable de cualquier tipo dentro de una funcion como
Main o otra funcion (lo veremos despues). Es una Variable Local 

Las variables locales son variables que viven durante la ejecucion de la funcion
de quien es parte. Solo es posible llamarlas y modificarlas dentro de la funcion

Cuando no se inicializa un valor para la variable local no se inicializa en 0.
Variables locales pueden contener basura de memoria si no se inicializan

NOTA:-----> u alcance está limitado a esa zona específica. 
Se almacenan en la pila (stack), no se inicializan automáticamente y dejan de 
existir al salir del bloque. */

    string ejemploLocal; 
    //Es un ejemplo de una variable local de tipo string 
    //___________NOTA IMPORTANTE_________
    /*________________________________________________________
        ->Los nombres de las Variables deben ser descriptivos
        ->Nunca deben iniciar con un numero
        ->No se debe usar simbolos especiales
        ->No usar palabras reservadas del lenguaje
        ->Procurar usar snake_case o camelCase.
    _________________________________________________________*/
    
    //Una variable puede estar inicializada con algun valor 
    int variableInicializada = 32;
    //O solo declararla para usarla mas tarde 
    float variableNoInicializada;
    
//=========================TIPOS DE DATOS EN C++============================

    char variableCharacter;    // Un solo caracter ASCII           -> 1 byte
    bool variableBooleana;    // Verdadero o falso                 -> 1 byte

    short variableShort;      // Enteros pequeños                  -> 2 bytes
    int   variableEntera;     // Enteros normales                  -> 4 bytes

    long  variableLong;       // Enteros grandes                   -> 4 u 8 bytes (depende sistema)
    long long variableLongLong; // Enteros muy grandes             -> 8 bytes

    float variableFloat;      // Números decimales (precisión simple) -> 4 bytes
    double variableDouble;    // Decimales (doble precisión)          -> 8 bytes

    long double variableLongDouble; // Alta precisión decimal      -> 8, 12 o 16 bytes

    string variableString;     // Cadena de caracteres             -> depende del contenido
    
    //NOTA: Un bit es una unidad de informacion (1 o 0)
    //Un byte es una unidad de almacenamiento compuesta por 8 bits
    
//==========================================================================   


    //para obtener el tamaño exacto de una veriable usamos el comando

    cout<<sizeof(variableCharacter)<<endl; //imprime en terminal el tamaño en bytes 
    
    //cuando queremos recibir informacion del usuario por input usamos
    cin>>variableString;
    //segun el tipo de dato de la variable que usemos.
    
    //cuando queremos mostrar la informacion de una variable en pantalla usamos
    cout<<variableString<<endl;
    
    //Recordemos que endl es un salto de linea <-------------
    
    //ejemplo pequeño con nombre y edad 
    string nombreUsuario;
    int edadUsuario;
    
    //Podemos agregar informacion extra al usar o cout tal que 
    //damos la instruccion al usuario de escirbir su nombre 
    cout<<"cual es tu nombre"<<endl; 
    cin>>nombreUsuario;
    
    //con el nombre del usuario le pedimos su edad 
    cout<<"cual es tu edad "<<nombreUsuario<<" ?"<<endl; 
    cin>>edadUsuario;
    
    //por ultimo mostramos ambos datos 
    cout<<"La edad de "<<nombreUsuario<<" es "<<edadUsuario<<endl;
    
    return 0;
}

//Julian Santuario Clase 1
