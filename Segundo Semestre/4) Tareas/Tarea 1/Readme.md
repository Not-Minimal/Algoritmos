# Tarea N°1

<div align="center" id="Sopa de Letras">
</div>

<p align="center">
  <a href="" target="_blank" rel="noreferrer"><img src="https://github.com/Not-Minimal/Algoritmos/blob/main/Segundo%20Semestre/4)%20Tareas/Tarea%202/Portada.png" alt="my banner"></a>
</p>

## Problema

Desarrollar un programa en C que permita jugar el juego “sopa de letras”. Requisitos de la 
aplicación: 
1. Deberá generar una matriz de caracteres de nxn (10 <= n <= 35)  
2. Deberá permitir el ingreso de k palabras por teclado ( [n/2]<= k <= [2*n] ), de tamaño 
igual o menor a n, las cuales se ubicarán en la matriz en una posición al azar en una fila o 
columna. Las palabras deben ser de tamaño mayor o igual que 2. Las palabras pueden 
estar escritas de izquierda a derecha, de derecha a izquierda, de arriba hacia abajo o de 
abajo hacia arriba. La orientación de la palabra también debe ser generada en forma 
aleatoria.  
3. Luego del ingreso de las k palabras a la matriz, deberá llenar el resto de la matriz con 
caracteres del alfabeto en forma aleatoria. 
4. Las k palabras ingresadas como los caracteres aleatorios debes estar en mayúscula, si el 
usuario ingresa las palabras en minúsculas el programa deberá transformarlas a 
mayúsculas. 

## Juego

1. El usuario deberá encontrar las palabras. Por cada palabra encontrada, el jugador deberá digitarla y su programa deberá verificar que efectivamente la palabra se encuentra presente, mostrando en pantalla la coordenada (celda y columna) en donde comienza la palabra y su orientación. 
2. Su programa deberá permitir un máximo de 3 errores en total 
3. El programa debe registrar y mostrar por pantalla el tiempo que demora el usuario en encontrar las k palabras ingresadas
 