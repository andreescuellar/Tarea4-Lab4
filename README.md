# Tarea Laboratorio 4 Programación Avanzada

### Carlos Andrés Cuéllar Velásquez 2497117
       
## a) Bitácora


1. Inicializar el programa.

   1.1 Se incluyen todas las librerias a utilizar. 
   
   1.2 Se hacen los prototipos de cada uno de los metodos a utilizar para poder escribirlos abajo del main.
   
   1.3 Se declaran las variables globales. 

 ![](Tarea4Fotos/inicio.png)

 
2. Tabla de multiplicar.

   2.1 Se hace un arreglo de 11 posiciones con los numeros de 0 a 10.
   
   2.2 Se declaran las variables numlt e i; ambas de tipo int.
   
   2.3 Se crea un ciclo for donde i iniciara de 0 hasta que sea menor a 11.
   
   2.4 Dentro del ciclo for, se estara imprimiendo cada valor y su resultado de la multiplicacion de numlt con los numeros del arreglo.

![](Tarea4Fotos/tabla.png)

3. Solicitar Vector.

   3.1 Se imprime el mensaje solicitando el largo del vector y se guarda en la variable global "numvec".
   
   3.2 Se crea el arreglo dinamico con una capacidad dada por el usuario.
   
   3.3 Se crea un ciclo for donde i iniciara de 0 hasta que sea menor al largo solicitado por el usuario.
   
   3.4 Dentro del ciclo for, se guardan todos los numeros ingresados dentro del arreglo.

![](Tarea4Fotos/pedir.png)

4. Impresión Vector.

   4.1 Se crea un ciclo for donde i iniciara de 0 hasta que sea menor al largo solicitado por el usuario.
   
   4.2 Dentro del for se imprimi el vector previamente ingresado por el usuario.
   
![](Tarea4Fotos/mostrar.png)

5. Suma elementos del vector y Largo del vector. 

   5.1 Se declara la variable sumat.
   
   5.2 Se crea un ciclo for donde l iniciara de 0 hasta que sea menor al largo solicitado por el usuario.
   
   5.3 Dentro del ciclo se iran sumando los valores dentro de la variable sumaT.
   
   5.4 Se imprime la variable sumaT que contiene la suma de todos los elementos del vector.
   
   5.5 Se imprime la variable global numvec que tiene el largo del vector.   

![](Tarea4Fotos/suma.png)

6. Suma elementos pares del vector. 

   6.1 Se declara la variable sumaI.
   
   6.2 Se crea un ciclo for donde K iniciara de 1 hasta que sea menor al largo solicitado por el usuario e incrementara de 2 en 2.
   
   6.3 Dentro del ciclo se iran sumando los valores dentro de la variable sumaI.
   
   6.4 Se imprime la variable sumaI que contiene la suma de todos los elementos pares del vector.

![](Tarea4Fotos/sumap.png)

7. Suma elementos impares del vector. 

   7.1 Se declara la variable sumaP.
   
   7.2 Se crea un ciclo for donde l iniciara de 0 hasta que sea menor al largo solicitado por el usuario e incrementara de 2 en 2.
   
   7.3 Dentro del ciclo se iran sumando los valores dentro de la variable sumaP.
   
   7.4 Se imprime la variable sumaP que contiene la suma de todos los elementos impares del vector.

![](Tarea4Fotos/sumai.png)

8. Orden de valores del vector. 

   8.1 Se declara la variable aux.
   
   8.2 Se crea un ciclo for donde i iniciara de 0 hasta que sea menor al largo solicitado por el usuario e incrementara de 1 en 1.
   
   8.3 Dentro del ciclo se crea otro for donde j iniciara de 0 hasta que sea menor al largo - 1 solicitado por el usuario e incrementara de 1 en 1.
   
   8.4 Dentro del ciclo se crea un if con la sentencia *(sum+j) > *(sum+j+1) que es la que hara que se vaya ordenando los valores. 
   
   8.5 Si se cumple la sentencia if, dentro del mismo se haran los cambios dentro de los elementos con la ayuda de la variable aux.

![](Tarea4Fotos/ordenar.png)

9. Impresión Vector.

   9.1 Se crea un ciclo for donde i iniciara de 0 hasta que sea menor al largo solicitado por el usuario.
   
   9.2 Dentro del for se imprimi el vector ya ordenado que  previamente habia sido ingresado por el usuario.
   
   ![](Tarea4Fotos/mostrar2.png)

10. Main.

   10.1 Se crea el main y dentro se llama a todos los metodos realizados anteriormente.
   
   10.2 Ya una vez finalizado todo el proceso, se agrega un delete para liberar los bytes utilizados en el arreglo dinamico. 
   
![](Tarea4Fotos/main.png)
