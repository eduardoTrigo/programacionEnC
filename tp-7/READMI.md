Trabajo practico numero 7

Tema: punteros, mecanismos de pasaje de parametros, asignacion dinamica de memoria.

1- calentando motores
lea y almacene una linea de texto en un arreglo de nombre frase[100]. cuente las consonantes,
mayusculas, minusculas que no son vocales y muestre los contadores.
use variables punteros para manejar contadores.

modifique el codigo de su programa para sumar un puntero que apunte al arreglo frase. siga las instrucciones paso a paso.
1- declare en forma local a main una variable puntero punt, que apune a un objeto de tipo char.
2- asigne la direccion inicial del arreglo frase a la variable puntero punt. realice esta tarea de dos maneras distintas.
3- muestre en pantalla la direccion de la variable puntero punt. use el indicador de formato apropiado. muestre tambien la direccion de la primera componente del arreglo frase.
4- muestre en pantalla el contenido de la cuarta celda del arreglo frase. refierace a ella utilizando : notacion de subindice del arreglo y notacion de puntero con desplazamiento mediante punt.
5- suponiendo que punt apunta al principio del areglo frase, ¿cual es la direccion referenciada por punt+5? ¿cual es el valor valor almacenado en esa direccion?. al mostrar el valor almacenado punt+5 ¿el puntero se movio del inicio del arreglo?
6-escriba las instrucciones necesarias para visualizar en la pantalla cada una de las componentes del vector frase,
    a- utilizando notacion de punteros con el puntero punt.
    b- mediante subindices de puntero punt.
    c- para los casos anteriores, ¿en que posicion quedo el puntero punt? ¿se ha movido de la componente 0 del arreglo frase? 