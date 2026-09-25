//Este es mi forma de retomar c++ desde ya haberlo aprendido hasta dominarlo.
//Dia 6
//En esta Clase veremos sobre FUNCIONES.

//______________________________FUNCIONES___________________________________
/*  Antes de aprender funciones, piensa esto:

        ¿Qué pasa si necesito usar el mismo bloque de código muchas veces?
        ¿Lo copio y pego?
        ¿Y si luego quiero cambiarlo?

Aquí nacen las funciones.

Una función es una forma de darle un nombre a un bloque de código
para poder reutilizarlo cuando lo necesitemos.

===============================================================================

Una función en C++ es un bloque de código reutilizable que realiza una tarea
específica, permitiendo estructurar programas de manera modular, ordenada y eficiente.
Se compone de un tipo de retorno, nombre, parámetros opcionales y un cuerpo, 
facilitando la legibilidad y mantenimiento al dividir problemas complejos en tareas
más pequeñas. 

CONCEPTO CLAVE-----> MODULARIDAD: 
    La modularidad en programación es la técnica de diseño de software que consiste 
    en dividir un sistema complejo en componentes más pequeños, independientes 
    y manejables llamados módulos
    
Una funcion Se compone de un tipo de retorno, nombre, parámetros opcionales y un cuerpo
y una posible declaración previa (prototipo) antes de main

*/

//_______________________________TIPOS DE FUNCIONES_____________________________ 
/*
    Hay muchos tipos de funcion que podemos clasificar en 2 tipos generales 
    para entenderlas mejor 
    
    Funciones Predefinidas:
        Son aquellas funciones que ya vienen hechas.
        Estas funciones ya estan implementadas, nosotros solo las usamos.
        
        Un ejemplo de este tipo de funciones son las que podemos encontrar
        en las BIBLIOTECAS.
        
        Las bibliotecas son colecciones de funciones ya implementadas que podemos
        incluir en nuestro programa.
        
            Son funciones que invocamos a nuestro programa.
            
            Para usarlas debemos incluir la biblioteca usando la directiva
            del preprocesador #include, seguida del nombre de la biblioteca 
            donde se encuentra.
            
            ejemplo:
            #include <iostream>
            #include <cmath>
            
            Es importante leer la documentacion de cada biblioteca con el objetivo 
            de dominar su funcionamiento.
            
    Funciones Definidas por el Usuario:
        Son funciones que nosotros escribirmos y desarrollamos dentro del codigo 
        A diferencia de las Predefinidas, tenemos mucho mayor control y 
        personalizacion.
        
        Para usarlas debemos primero escirbirlas
        
         int sumar(int a, int b) {
             return a + b;
         }
        
        Ese es un ejemplo de una funcion que suma 2 valores enteros y luego devuelve 
        el resultado de la suma  
        
        para usarlas solo debemos escribir su nombre y pasarle los parametros (si es que los tiene)
        
        Este es un ejemplo de como la usariamos  
        
        int numeroUno=5;
        int numeroDos=7;
        
        int numeroResultado= sumar( numeroUno , numeroDos);
        
        De esta forma la variable numeroResultado tendra el valor de la suma de 
        ambas variables

    
    COMO FUNCIONAN REALMENTE LAS FUNCIONES (De forma simplificada)
    
        FLUJO DE EJECUCION

        Cuando llamamos a una funcion:

            1. El programa pausa su ejecucion actual.
            2. Salta al bloque de codigo de la funcion.
            3. Ejecuta su contenido.
            4. Si hay un return, devuelve un valor.
            5. Regresa al punto donde fue llamada.
    
*/ //PORFAVOR LEASE CON CALMA :3 TQM 



//============================================================================


//INICIAMOS NUESTRO PROGRAMA.

#include <iostream>

//Para esta clase usaremos la biblioteca cmath 
/*La biblioteca cmath nos ayuda a realizar una serie de operaciones matematicas 
que seria un tanto complicada de hacer a mano por lo que es de gran ayuda para realizar 
calculos.

    Potencias y Raíces: pow(x, y) , sqrt(x) , cbrt(x) .
    
    Redondeo: ceil(x) (redondea hacia arriba), floor(x) (redondea hacia abajo),
    round(x) (redondea al entero más cercano).
    
    Trigonometría: sin(x), cos(x), tan(x) (trabajan con radianes).
    Logaritmos: log(x) (logaritmo natural), log10(x) (logaritmo base 10).
    Valor Absoluto: abs(x) (para enteros), fabs(x) (para punto flotante). 

PORFAVOR ACOSTUMBREMOS A LEER LA DOCUMENTACION JSJSJS (PODEMOS ENCONTRARLA EN 
INTERNET, FOROS, YOUTUBE, ETC)

*/ //Importante para esta clase 

#include <cmath>

using namespace std;



//===========Funciones============

//Definimos funcion fuera del main:3
    
//Creamos la funcion 

int numeroElevado( int A , int B){
    
    int resultadoFuncion=1;
    for (int i=1; i<=B;i++){
    resultadoFuncion*=A;
    }
    return resultadoFuncion;
    
}
//=================================



//============================   MAIN   ==============================

//Recordemos que nuestro Main es una funcion :3
int main(){
    //iniciamos un par de variables con algunos valores iniciales.
    float numeroUno=5;
    float numeroDos=2;
    
    //usemos una de las funciones predefinidas de cmath para darle un valor a una variable.
    
    float resultadoA= pow( numeroUno , numeroDos ) ;
    //tomara el valor de elevar numeroUno a la numeroDos
    
    //verifiquemos en terminal
    cout<<numeroUno<<" elevado a la "<<numeroDos<<" es igual a "<<resultadoA<<endl;
    //otra opcion seria
    cout<<numeroUno<<" elevado a la "<<numeroDos<<" es igual a "<<pow( numeroUno , numeroDos )<<endl;
    
    //Ese es un ejemplo de uso de una funcion predefinida de una biblioteca.
    
    //INTENTEMOS REPLICARLA EN UN BLOQUE DE CODIGO 
    //para un numero al cuadrado 
    
    resultadoA= numeroUno*numeroUno; //funciona no?
    cout<<numeroUno<<" elevado al cuadrado es igual a "<<resultadoA<<endl;
    //en efecto :3 pero.... que tal si queremos hacerlo automaticamente con lo que diga el usuario?;
    
    //pedimos el numero a elevar y el exponente
    cout<<"\n Numero a elevar: "<<endl;
    cin>>numeroUno;
    cout<<"\n Numero Exponente: "<<endl;
    cin>>numeroDos;
    resultadoA=1;
    
    //Ya tenemos los datos, hagamos el calculo;
    for (int i=1; i<=numeroDos;i++){
        resultadoA*=numeroUno;
    }
    cout<<resultadoA;
    
    //Bien bien pero ahora...supongamos que queremos hacer 5 calculos.
    //podriamos copiar y pegar pero no seria lo mejor cuando el calculo es mas grande.
    //Para eso usamos las funciones.
    

    
    cout<<"\n Ahora con funciones :3 "<<endl;
    
    //Pedimos numeros 
    for (int i=1 ; i<=5 ; i++){
        
        cout<<"\n Numero a elevar: "<<endl;
        cin>>numeroUno;
        cout<<"\n Numero Exponente: "<<endl;
        cin>>numeroDos;
        
        
        numeroElevado( numeroUno , numeroDos);
        cout << numeroUno << " elevado a la " \
            << numeroDos << " es igual a " \
            << numeroElevado( numeroUno , numeroDos )<<endl;
         
    }
    
    

    
    return 0;
}

//===================================================================

//Julian Santuario Clase 5



