//===============================ARCHIVO PUNTO CPP=============================
//esto es lo segundo

/* El archivo .CPP es el archivo en el cual:
    -Vamos a describir o a decir que hace cada uno de los metodos de nuestro .h 
    con los atributos de la clase.
    
    - El archivo .cpp debe tener exactamente el mismo nombre de la clase.
    
        En este caso Auto.cpp 
        El nombre del archivo y la clase debe empezar en mayuscula
    
    2.- El archivo .cpp es basicamente la implementacion de los metodos de la clase 
    
    3.- Le decimos que hacer*/
//=============================================================================

//Ya que ahora nuestra Clase es una biblioteca debemos de incluirla 

#include "Auto.h" //Entre comilllas

//Ahora una por una debemos explicar nuestras funciones 
/* en el archivo .h pusimos 

        void modificarPrecio()
        Auto() //Constructor default
        Auto( string marca , int anio , int precio) //Constructor
    
    ahora debemos describirlas todas*/
    
//Empezando con.

//Origen de la funcion :: nombre de la funcion (){
void Auto::mostrarInformacion() {
    //Ya que solo queremos mostrar la informacion la imprimimos
    
    cout<<"=====================Informacion=============================="<<endl;
    cout<<"Marca del auto: "<<marca<<endl;
    cout<<"Anio del auto: "<<anio<<endl;
    cout<< "Precio del auto : "<<precio<<endl;
    cout<<"================================================================"<<endl;
    
    
    //la funcion es void porque no retorna nada, solo modifica el precio
}


//Ahora los constructores
//Origen de la funcion :: nombre de la funcion (){

Auto::Auto(){ //Constructor default
    
    //le ponemos valores por default
    marca= "mercedes";
    anio= 2010;
    precio =1500;
    
}

Auto::Auto(string marcaA , int anioA , int precioA){ //constructor con valores iniciales
    
    //solo asignamos los valores recibidos a nuestro objeto
    marca=marcaA;
    anio=anioA;
    precio=precioA;
}

//y listo eso es todo :3
