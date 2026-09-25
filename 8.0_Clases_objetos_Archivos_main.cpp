//====================CLASE EXPRESS DE CLASSES PARTE 2======================
//Julian Emiliano Santuario Romero

/* Ahora que ya endentimos como usar los objetos vamos a ver como usar las classes 
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
    creamos apartir de ella. :v*/
    
//Hagamos el ejemplo de Auto.


// ------>>>>>>>>>Primero el .h luego el .cpp y al final el main, en ese orden 



//Ya que viste el h y el cpp ahora toca usarlo en nuestro main

#include <iostream>
#include "Auto.h" //debemos incluir nuestro .h que es nuestra libreria


int main()
{
    std::cout<<"Hello World"<<endl;
    //evitemos usar el namespaces y usemos la ruta completa
    
    //creamos un objeto Auto sin decirle nada y veamos que pasa
    
    //Tipo de dato   Nombre de dato
    
    Auto vehiculoDeJaime; //el objeto ya se creo
    
    //usemos su metodo que hicismos para ver su informacion 
    //objeto punto metodo 
    vehiculoDeJaime.mostrarInformacion();
    
    //ahora creemos otro objeto pero pasemosle valores 
    
    Auto cochesitoDeIvanna("BYD",2016,3200);
    
    //usemos su metodo que hicismos para ver su informacion 
    //objeto punto metodo 
    cochesitoDeIvanna.mostrarInformacion();
    

    return 0;
}
