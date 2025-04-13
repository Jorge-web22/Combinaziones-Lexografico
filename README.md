# Combinaziones-Lexografico
Este programa en C++ genera todas las r-combinaciones posibles del conjunto {1,2,...,n}, donde los valores de n y r son proporcionados por el usuario.

Autor: Jorge Alan 

Requisitos del sistema: Compilador c++

Instrucciones de compilacion: 1. Descargar el repositorio.
                              2. Si usas Git, usas la opcion Git Bash, git clone <url del resitorio>, cd nombre del repositorio.
                              3. Descarga y descomprime el ZIP.
Orden lexicografico: Compara las combinaciones elementos por elemento de izquierda a derecha. Por ejemplo, para n=5, r=3, las combinaciones en orden lexicografico son: [1,2,3], [1,2,4], [1,2,5], [1,3,4], [1,3,5], [1,4,5], [2,3,4], [2,3,5], [2,4,5], [3,4,5]
El algoritmo genera las combinaciones directamente en orden lexicografico, sin necesidad de ordenarlo despues.

Validacion de entrada: Al copilarlo, el programa solicita al usuario dos valores enteros, n y r, y aplica estas comprobaciones: n>=1. si el usuario introduce un valor menor a 1, muestra un error y vuelve a pedir n hasta que la condicion se cumpla. 
r>0: si el usuario introduce un valor negativo muestra error y vuelve a pedir r hasta que la condicion se cumpla.
r<=n: si r > n, muestra error y vuelve a pedir r o n hasta que se satisfaga.
Formato de salida: Una vez validado n y r, el programa crea un fichero con el nombre <combinaciones n_r.csv>

Verificacion del conteo: Para estar seguro de que el programa a generado correctamente C(n,r) combinaciones, se implementa una funcion <binomial_coefficient(n,r)> que calcula C(n,r) = n! / r!(n-r)! de manera segura.
Cada vez qyue el algoritmo emite una combinacion al csv, incrementa un contador cout_gen, al terminar, el programa calcula C(n,r) y lo compara con count_gen.

  
 
  








