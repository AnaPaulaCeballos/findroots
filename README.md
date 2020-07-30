# findroots
 2 progrmas de c++ PruebaenCasaHP
find roots :
Es un programa que ayuda a encontrar las raices REALES de un polinomio 
de grado tres. Para la resolucion de este problema me ayude de las siguientes formulas 
Cubic Equation solving formula:
x1 = (-Term1 + r13 * cos(q3 / 3)
x2 = (-Term1 + r13 * cos(q3 + (2 * ∏) / 3)
x3 = (-Term1 + r13 * cos(q3 + (4 * ∏) / 3)

donde x1 x2and x3 son las rices.

donde:
discriminant(Δ) = q3 + r2
q = (3c - b2) / 9
r = -27d + b(9c - 2b2)
s = r + √ (discriminant)
t = r - √ (discriminant)
term1 = √ (3.0) * ((-t + s) / 2)
r13 = 2 * √ (q[/i] 

Use estas formulas porque me parecio un metodo mucho más facil de programar y con menos margen 
de error. 

En el programa encontramos las funciones main(),formatonum(),void polynomic3(),void formulagen(). 

***********Contenido de la función formatonum(): 
En ella se recive una cadena de tipo char, en donde el usuario intruduce
las variables del polinomio a,b,c y de. Posteriormente con ayuda del ciclo
while, se introducen solo los valores numericos en el vector val[], que es una de nuestras dos
variables globales. 
***********Contenido de la funcion polynomic3():
En esta funcion  encontramos al inciar un if(d==0) que nos envia a una funcion de la que hablaremos 
más adelante. Lo agradable de trabajar con estas formulas es que a lo largo de el proceso de calcular 
las variables podemos irnos dando cuentas, de la cantidad de raices reales que esperamos obtener. 
Si nuestro discriminant es mayor a 0 podemos intuir que tenemos solo una raiz real y las otras dos son 
imaginaras, por lo solo nos preocuparemos por la primera raiz. 
si nuestro discriminante es igual a 0, entonces tendremos que obtener la primera raiz y x2 sera igual a 
x3.
si no es ninguna de las opciones anteriores entonces tenemos 3 raices reales y diferentes entre ellas. 
Cualquiera de las opciones ñe da valor a nuestro vector xs[], donde guardamos los ceros encontrados. 
***********Contenido de la función formulagen():
A esta funcion se ingresa cuando d=0, por lo que podemos decir que una de las rizes es 0 y las otras dos
las podemos calcular con formula general. Como ya sabemos tambien podemos saber si la formula general nos va 
a dar raices reales. 
***********main():
en el llamamos a las funciones en orden. 
1.- "formatonum()" donde pedimos la entrada al usuario 
2.- "polynomic3()" donde se procede a resolver el polynomio mediante las formulas 
	2.5.-"formulagen()" que se utiliza para resolver un caso especifico de polynomio 
3.- Dentro de la funcion se imprimen los resultados finales el vector xs[] con el formato solicitado.