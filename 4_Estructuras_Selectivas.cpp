//Este es mi forma de retomar c++ desde ya haberlo aprendido hasta dominarlo.
//Dia 4
//En esta Clase veremos sobre estructuras de control.

//_________________________ESTRUCTURAS DE CONTROL_____________________________
/* Las estructuras de control en C++ determinan el flujo de ejecución de un 
programa, permitiendo tomar decisiones, repetir bloques de código y gestionar 
el orden secuencial.

HAY TRES TIPOS PRINCIPALES 
    Selectivas: nos ayudan a tomar decisiones basadas en una serie  de condiciones
    asignadas dentro del codigo.
    
    if, else, else if , switch
    
    Iterativas: nos ayudan a repetir acciones de acuerdo a una cantidad de veces 
    definida o a una condicion dada previamente.
    
    while, for, do while
    
    Secuenciales: (ejecución normal línea por línea)
    
//En esta sesion veremos las ESTRUCTURAS DE CONTROL selectivas.*/

//Iniciamos nuestro programa como ya sabemos
#include <iostream>
using namespace std;


int main(){
    //________________ESTRUCTURA DE CONTROL SELECTIVA IF_________________
    /* La estrurctura de control if es una estructura que no ayuda a ejecutar
    un bloque de codigo si y solo si se cumple con la condicion asignada en el 
    bloque if.*/
    
    int condicion=0;
    
    //Ejemplo de if 
    if (condicion==0){
        //bloque de codigo
        condicion=5;
    } 
    //En este caso la variable condicion se le asignara 5 siempre que sea 0 al inicio 
    cout<<"Valor de condicion en if: "<<condicion<<endl;
    
    //_______EXPLICACION_________
    /* En el ejemplo primero iniciamos la estructura if
    
    if(condicion==0){ La condicion es aquella cosa que vamos a evaluar
        bloque de codigo
    }
    
    El if evalúa una expresión booleana.
    Si el resultado es true, ejecuta el bloque asociado.
    Si es false, lo omite. 
    
    La condición siempre se evalúa como bool
    C++ convierte automáticamente valores numéricos a booleanos*/
    
    
    //______________ESTRUCTURA DE CONTROL SELECTIVA IF ELSE______________
    /* La estructura de control if else es una variacion de la estructura if 
    donde primero evaluamos la condicion asignada en la parte de if.
    En caso de se cumpla, se ejecutará el bloque de codigo.
    
    Si la condición es falsa, se ejecutará el bloque else.;*/
    
    //Reiniciemos nuestra variable condicion 
    condicion=0;
    
    //Ejemplo de if else 
    if (condicion==1){
        cout<<"La primera condicion se cumplio (if)"<<endl;
    }else{ //si la condicion no se cumplio se ejecuta esta parte  
        cout<<"La condicion no se cumplio (else)"<<endl;
    }
    
    //_______EXPLICACION_________
    /* Funcionamiento:

        1) Se evalúa la condición dentro del if.
        2) Si la condición es verdadera (true), se ejecuta el bloque del if.
        3) Si la condición es falsa (false), se ejecuta el bloque del else.
        4) Solo uno de los dos bloques se ejecutará.*/
    
    //______________ESTRUCTURA DE CONTROL SELECTIVA ELSE IF______________
    /* La estructura de control else if es un complemento de la estructura if 
    donde vamos evaluando condiciones de forma secuencial al no cumplir con las
    condiciones previas.
    
    Una vez que se cumpla una de las condiciones, se ejecutara el bloque de codigo
    correspondiente a la condicion, posterior a eso. No se evaluaran mas condiciones
    de la estructura
    
    Se pueden agregar tantas condiciones como se requiera
    */
    
    //Asignemos un numero del 1 al 3 a nuestra variable condicion
    condicion=3;
    
    //Ejemplo de else if 
    
    if (condicion==0){
        cout<<"La variable es 0 y no se evaluaran mas condiciones"<<endl;
    }else if (condicion==1){
        cout<<"La variable es 1 y no se evaluaran mas condiciones"<<endl;
    }else if (condicion==2){
        cout<<"La variable es 2 y no se evaluaran mas condiciones"<<endl;
    }else if (condicion==3){
        cout<<"La variable es 3 y no se evaluaran mas condiciones"<<endl;
    }else{
        cout<<"ninguna condicion se cumplio"<<endl;
    }
    
    //__________ESTRUCTURA DE CONTROL SELECTIVA SWITCH CASE______________
    /* El switch case en C++ es una estructura de control condicional que permite
    seleccionar y ejecutar un bloque de código entre múltiples opciones, Debe ser
    una expresión de tipo integral o enumerado. 
    
    Es una alternativa más organizada y legible que múltiples sentencias if-else 
    cuando se compara una misma variable contra valores constantes
    
    Se pueden agregar tantos casos como se necesiten.
    
    usamos la palabra reservada "case" para establecer cada uno de los casos.
    
    asimismo usamos la palabra reservada "break" para salir del caso y continuar
    con la ejecucion secuencial del programa.
    
    y usamos la palabra reservada "default" para establecer un caso por defecto*/
    
    //Establecemos una variable entera o caracter, en este caso entera 
    int numeroCaso=0;
    
    switch (numeroCaso){ //iniciamos switch y le pasamos la variable que definira los casos
        
        case 0: //case con Valor esperado para ejecutar el caso
            //bloque de codigo que se va a ejecutar 
            cout<<"Caso 0 del switch"<<endl;
            break; //romper el switch y continuar con la ejecucion del programa
            
        case 1: 
            cout<<"Caso 1 del switch"<<endl;
            break;
        
        case 2: 
            cout<<"Caso 2 del switch"<<endl;
            break;
            
        case 3: 
            cout<<"Caso 3 del switch"<<endl;
            break;
        
        default: //caso por defecto en caso de no entrar a ningun caso 
            cout<<"Caso por defecto del switch"<<endl;
            //break es opcional si default es el ultimo caso
    }
    
    //_____NOTA IMPORTANTE DE SWITCH CASE__________
    /* IMPORTANTE:
        Si no se utiliza la palabra reservada "break", el programa continuará
        ejecutando los siguientes casos aunque no coincidan con el valor.
        A este comportamiento se le conoce como "fall-through".*/
    
}


//================ FUNCIONAMIENTO INTERNO DE LAS ESTRUCTURAS SELECTIVAS ==================

/*
Las estructuras selectivas (if, else if, else, switch) funcionan evaluando
una condición y tomando una decisión sobre qué bloque de código ejecutar.

--- ¿Qué ocurre internamente? ---<----------------------NOTA

1) Evaluación de la condición
   La expresión dentro del if o switch se evalúa.
   El resultado siempre termina convirtiéndose en un valor booleano:
       true  (1)
       false (0)

   Ejemplo:
       if (x > 5)

   El procesador calcula: ¿x es mayor que 5?
   El resultado será 1 (true) o 0 (false).

2) Salto condicional (muy importante)
   A nivel interno, el compilador convierte el if en instrucciones
   de "salto" (jump).

   Es decir:
       - Si la condición es verdadera → continúa ejecutando el bloque.
       - Si es falsa → salta ese bloque y continúa después.

   Básicamente el programa decide qué instrucciones ejecutar
   y cuáles ignorar.

3) En el caso de if - else

       if(condicion)
           bloque A
       else
           bloque B

   Internamente:

       - Evalúa condición
       - Si es true → ejecuta A y salta B
       - Si es false → salta A y ejecuta B

   Solo uno de los bloques se ejecuta.

4) En el caso de switch

   El valor de la expresión se compara contra los "case".
   El compilador genera comparaciones internas:

       ¿Es igual a case 0?
       ¿Es igual a case 1?
       ¿Es igual a case 2?

   Cuando encuentra coincidencia:
       - Ejecuta ese bloque.
       - Continúa ejecutando los siguientes hasta encontrar "break".

   Si no encuentra coincidencia:
       - Ejecuta "default" (si existe).

5) ¿Qué significa todo esto?

   Las estructuras selectivas no "detienen el programa".
   Solo controlan qué instrucciones se ejecutan y cuáles se omiten.

   Técnicamente:
   Son decisiones basadas en saltos condicionales dentro del flujo
   secuencial del programa.
*/

//RESUMEN DEL FUNCIONAMIENTO: Evaluar → decidir → saltar o ejecutar.

//Julian Santuario Clase 3.
    
    
    
    
