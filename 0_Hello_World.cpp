//Este es mi forma de retomar c++ desde ya haberlo aprendido hasta dominarlo.
//En esta clase vamos a ver una pequeña introduccion a c++
// _________________________COMENTARIOS_____________________________________//

/*

// Los comentarios de linea se ponen con doble // <------NOTA

/*____________________________________________________________________________

   Para bloques de comentario vamos a usar /* comentarios y cerrarlo con * / 
_____________________________________________________________________________*/


//________________________PREPARACION DE PROGRAMA___________________________//

//Para comensar todo programa añadimos

#include <iostream> //casi obligatorio

/* __________________________________________________________________________
 #include:
 Es el "comando" por el cual vamos a reciclar codigo ya hecho
 por nosotros o alguien mas es decir tomar herramientas externas
 
 <iostream>:
 Es la libreria de entrada y salida de c++ estandar con cosas como cin o cout
 
 NOTA: Las cosas con # son instrucciones para el preprocesador que se ejecutan
 antes que las otras
____________________________________________________________________________*/

using namespace std; //opcional pero recomendado al aprender 


#include <iostream>
using namespace std;

/*____________________________________________________________________________
 Un namespace es un contenedor de nombres que nos dice de que biblioteca 
 viene una funcion para evitar conflictos entre dos funciones con el mismo
 nombre pero de diferente biblioteca
 
 En el namespace std todas las funciones de ponen tipo
 std::cin  std::cout 
 Especificamos que viene del namespace std
 
 Con el using asumimos que todo lo del namespace std puede usarse sin escribir
 std::
 solo poner 
 
    cin (character input)
    cout (character output)
 
 NOTA: en un entorno profesional no se usa eso, hay que especificar con :: el
 origen del comando segun su biblioteca es decir la ruta completa
_____________________________________________________________________________*/
 
//_________________________INICIO DE PROGRAMA______________________________//

//------------------NOTA: Cada linea debe terminar con un ; 

/*_____________________________________________________________________________

C++ es un lenguaje de programacion de proposito general y Orientado a Objetos

Osea se: 
    No esta hecho para una sola cosa
    Y permite programar usando el paradigma de Programación Orientada a Objetos
        ->La Programación Orientada a Objetos es un paradigma que organiza el 
        código en clases y objetos, agrupando datos y comportamientos 
        relacionados en una misma estrutura de la cual se crean objetos.

_____________________________________________________________________________*/

//Aqui inicia nuestro programa 

int main(){  //definicion de una funcion "tipo nombre(){"

    //Sobre Main... 
    /* La parte Main de nuestro programa es la funcion principal de el en C++.
    La ejecución del programa comienza en main, y desde ahí se pueden llamar 
    otras funciones...
    Main es una funcion especial y obligatoria 
    Siempre debe ser int <------NOTA
    */
    
    string mensaje; //declaramos una variable ---> tipo nombre;
    
    cout<<"Hola mundo"<<endl; //imprimir el clasico "Hola mundo"
    //endl es end line osea salto de linea 
    
    cin>>mensaje; //usamos cin para recibir informacion del usuario
    // el >> se usa para insertar datos a una entrada.
    
    cout<<mensaje<<endl; //cout muestra la informacion en la consola
    // el operador << se usa para enviar datos a la salida
    
    /*_____ De esta manera logramos que el usuario escriba un mensaje y luego
    se muestre en la terminal (muy simple pero es un buen comienzo) ________*/
    
    return 0; //Control de "Todo salio bien" si al final devuelve 0
}; //fin de una funcion "};"


/*_______________________Explicacion Relevante_________________________________

Cuando ejecutamos y compilamos:

//____PASO 1_____
/*
    ->El sistema operativo carga el programa en RAM 
    ->Se reserva memoria para:
    
        -El programa en si.
        
        -Variables globales. 
        
        -Stack (pila)
            El stack es una zona de la memoria RAM que
                ->Guarda variables locales
                ->Guarda parámetros de funciones
                ->Controla las llamadas a funciones
                
            Es una estructura LIFO (last In First Out)
            Cuando una función termina, su espacio en el stack se libera 
            automáticamente.
            
                Ejemplo: la variable "mensaje" se guarda en stack y cuando 
                termina el main se libera esa memoria
                
            El stack es una Zona de memoria donde se guardan variables 
            locales y llamadas a funciones.
            Se gestiona automaticamente y se libera cuando la funcion termina.

                
        -Heap (monton)
            El heap es una zona de la memoria RAM que
                ->Se usa para memoria dinamica.
                ->No se libera automáticamente al salir de una función.
                ->Es flexible pero se requiere mas control 
                    -Usamos new o delete para manejarla 
                
            Zona de memoria para almacenamiento dinamico. 
            Se usa cuando un objeto necesita mas memoria de la que 
            cabe en el stack.
            Requiere gestion mas cuidadosa.
            
        Nota: 
        ->Stack es como una mochila. todo entra y sale rapido pero pequeño
        ->Heap es como un terreno donde pides espacio para construir tal cosa 
        y el espacio esta ahi reservado hasta que decidamos liberarlo (grande)
            
        

//____PASO 2_____
*/

//____PASO 2_____
/*
    -> El sistema llama a la funcion Main como punto de entrada.
    -> Se crea un Stack Frame.
        -Un bloque de memoria dentro del stack que guarda
            >variables locales
            >parametros de funcion
            >direccion de retorno (donde continuar)
            >datos de control del compilador
    
    Mensaje es una variable de tipo String (una cadena de caracteres)
    una vez que se crea, vive en el stack de esta forma
    
    STACK
    (solo son valores de ejemplo, no se asignan de manera fija)
    
    mensaje:
        puntero -> 0xAB23 (dirección de memoria virtual asignada por el sistema operativo)
        size = 0 
        capacity = 15
    
    capacity representa el espacio reservado para crecimiento del string 
    y puede variar según la implementación.
    
    HEAP 
    0xAB23 → ""
    
    digamos que ponemos mensaje=hola entonces 
    
    STACK
    (solo son valores de ejemplo, no se asignan de manera fija)
    
    mensaje:
        puntero -> 0xAB23 (dirección de memoria virtual asignada por el sistema operativo)
        size = 4 (h o l a (4 caracteres ocupados))
        capacity = 15 (de 15 disponibles (solo es ejemplo, pueden ser mas))
    
    capacity representa el espacio reservado para crecimiento del string 
    y puede variar según la implementación.
    
    HEAP 
    0xAB23 → "Hola"
    
    Nota--> Los nombres de las variables solo nos facilitan no tener que poner
    la direccion de memoria todo el tiempo.
*/

//____PASO 3____
/*
Cuando termina la funcion Main.
return 0; <-----  

    ->"mensaje" se destruye del stack
    ->Y si reservó memoria dinámica, el destructor libera el heap
    -> se elimina el stack frame 
    -> el programa se termina  
    -> Los destructores liberan los recursos automáticamente
    
*/ 

//____VISTA DEL FLUJO__
/*
Programa inicia
   ↓
Sistema operativo carga programa en memoria virtual
   ↓
Se crea stack frame de main
   ↓
mensaje se construye 
   ↓
Mostrar "Hola mundo"
   ↓
Esperar input
   ↓
std::string gestiona memoria internamente si es necesario
   ↓
Mostrar mensaje
   ↓
return 0
   ↓
Ejecutar destructores de objetos locales
   ↓
Liberar recursos
   ↓
Eliminar stack frame
*/

//Julian_Santuario Clase 0  














