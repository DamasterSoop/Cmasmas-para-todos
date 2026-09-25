//===============================ARCHIVO PUNTO H=============================
//es lo primero de todo
/* El archivo .h es el archivo en el cual:
    -Vamos a definir no solo las caracteristicas del objeto que queremos
    -Tambien las acciones que queremos hacer con el 
    
    1- El archivo .h debe tener exactamente el mismo nombre de la clase.
    
        En este caso Auto.h 
        El nombre del archivo y la clase debe empezar en mayuscula
    
    2.- El archivo .h es basicamente un plano de nuestro objeto 
    
    3.- Solo ponemos lo que planeamos que haga pero no le decimos como
    
    Recordemos que...
        Nota tecnica: hay partes del programa que se ejecutan y cargan antes que otras
            *bibliotecas
            *variables globales
            *namespaces
        y... ya que es una clase, queremos que se ejecute o se cargue antes que el main 
        
        Para eso usamos unas palabras directivas (aqui abajo la explicacion)
    */
//============================================================================
//directiva de definicion
#ifndef AUTO_H //Escribir el nombre del archivo en MAYUSCULA_H
        /*if not define (si no esta definido....AUTO_H) Nos sirve para decirle al
        procesador que si no se ha definido la clase AUTO_H entonces la defina*/
        
#define AUTO_H //Escribir el nombre del archivo en MAYUSCULA_H
        /* define (definir....AUTO_H) Nos sirve para decirle al
        procesador asi queremos que organize a AUTO_H en la memoria*/
        
//tambien añadimos bibliotecas que va a usar nuestra clase 
#include <iostream>
#include <string>
using namespace std;

//Ahora, aqui va nuestra clase

class Auto { //class + Nombre de la clase iniciando en mayuscula
    
    //Hay atributos de diferente tipo (publico, privado y protegido)
    //ahorita puro publico
    
    public:
        //Primero ponemos las atributos que queremos que tenga el objeto
        string marca;
        int anio;
        int precio;
        
        //Ahora van los metodos (cosas que queremos hacer con los objetos)
        void mostrarInformacion(); //por ejemplo xd.
        
        //y ahora Constructores y destructores
        /*Son las formas en como vamos a inicializar un objeto para que no nos pase 
        lo de los numero raros de la clase pasada
        
        Normalmente son 2 Constructores 
            1.- Valores por default
            2.- Valores genericos (que nosotros le ponemos)
        */
        
        //No son de ningun tipo ----> deben llamarse igual a la clase
        Auto(); //Constructor default/ No le pasamos nada, solo le decimos que cree un objeto vacio
        
        Auto( string marcaA , int anioA , int precioA); //Constructor con datos.
        /*Aqui aparte de pedirle al procesador que reserve memoria, ya estamos llenando ese 
        espacio con informacion
        
        Auto (aqui van los datos que le pasamos con sus tipos de dato que debe recibir)*/
        
    private:
    
    protected:
    
    
}; //No olvidar el  ;

#endif //end define (terminar de definir)
