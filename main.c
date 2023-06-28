#include <stdio.h>
#include <stdlib.h>
#include <string.h>
///VARIABLES GLOBALES:
int col = 6;

///FUNCIONES:
void cargarMatrizInt(int matrix[][col],int dimF);
void mostrarMatrizInt(int matrix[][col], int dimF);
int sumarMatrizInt(int matriz[][col], int dimF);
float promedioMatriz(int matriz[][col], int dimF, int suma);
int buscarDato(int matriz[][col], int dimF, int dato);
int cargarMatrizChar(char matrix[][col], int dimF);
void mostrarMatrizChar(char matrix[][col], int dimF);
int cargarMatrizStrings(char matrix[][col], int filas);
void mostrarMatrizStrings(char matrix[][col],int filas);
int buscarDatoMatrizString(char matrix[][col], int filas, char dato[]);
int buscarPalabraMatrizString(char matrix[][col], int filas, char dato[]);
int main()
{
/**1-Hacer una función que reciba como parámetro una matriz de números enteros y
permita que el usuario ingrese valores al mismo por teclado. La función debe cargar la
matriz por completo.*/
/*
    int matriz[3][col];
    cargarMatrizInt(matriz, 3);
*/
/**2-Hacer una función que reciba como parámetro una matriz de números enteros y
la muestre por pantalla (en formato matricial).*/
/*
int matriz[4][col];
//CARGAR MATRIZ
cargarMatrizInt(matriz, 4);
//MOSTRAR MATRIZ
mostrarMatrizInt(matriz, 4);
*/
/**3-Hacer una función que reciba como parámetro una matriz de números enteros y
 que cargue la misma con números aleatorios (sin intervención del usuario).
 La función debe cargar la matriz por completo. */
 /*
 int matriz[5][col];
 cargarMatrizRand(matriz, 5);
 printf("MOSTRANDO MATRIZ: \n");
 mostrarMatrizInt(matriz, 5);
*/
/**4-Hacer una función tipo int que sume el contenido total de una matriz de números enteros.*/
/*
int matriz[3][col];
cargarMatrizInt(matriz, 3);
mostrarMatrizInt(matriz, 3);
//SUMANDO EL CONTENIDO TOTAL DE LA MATRIZ:
int suma = sumarMatrizInt(matriz, 3);
printf("SUMA DE LOS ELEMENTROS DE LA MATRIZ: %i", suma);
printf("\n");
*/
/**5-Hacer una función tipo float que calcule el promedio de una matriz de números enteros. */
/*
int matriz[3][col];
cargarMatrizInt(matriz, 3);
mostrarMatrizInt(matriz, 3);
int suma = sumarMatrizInt(matriz, 3);
float promedio = promedioMatriz(matriz, 3, suma);
printf("El promedio de la matriz es de: %0.2f", promedio);
*/
/**6-Hacer una función que determine si un elemento se encuentra dentro de una matriz
de números enteros. La función recibe la matriz y el dato a buscar. */
/*
int matriz[3][col];
int dato, datoEncontrado;
//CARGAR MATRIZ RAND:
cargarMatrizRand(matriz, 3);
//Mostrar matriz:
mostrarMatrizInt(matriz, 3);
printf("\n");
printf("Que numero desea buscar? ");
fflush(stdin);
scanf("%i", &dato);
printf("\n");
printf("Buscando numero...");
printf("\n");
printf("\n");
datoEncontrado = buscarDato(matriz, 3, dato);
if(datoEncontrado == 1){
    printf("DATO ENCONTRADO: |%i| ", dato);
}else{
    printf("Lo siento :c Ese dato no se encuentra en la matriz.");
}
printf("\n");
*/
/**7-Hacer una función que cargue un arreglo de palabras (strings). La función debe retornar
cuantas palabras se cargaron.  (puede ser a través del parámetro como puntero)*/
/*
char matriz[2][col];
//CARGAR MATRIZ CHAR:
int validosChar = cargarMatrizChar(matriz, 2);
printf("\n");
printf("Se cargaron un total de %i palabras", validosChar);
printf("\n");
printf("\n");
*/
/**8-Hacer una función que muestre un arreglo de palabras.*/
/*
//MOSTRAR MATRIZ CHAR:
printf("Mostrando las palabras \n");
printf("\n");
mostrarMatrizChar(matriz, 2);
printf("\n");
*/
/**9-Hacer una función que determine si un string se encuentra dentro de un arreglo de strings.
La función recibe el arreglo, la cantidad de palabras que contiene y la palabra a buscar.
///devuelve el índice de la fila en que se encuentra, de lo contrario -1*/
/*
char matrizPalabras[20][col];
char dato[20];
///CARGAR MATRIZ DE STRINGS
int matrizValidos = cargarMatrizStrings(matrizPalabras, 20);
///MOSTRAMOS LA MATRIZ
mostrarMatrizStrings(matrizPalabras, matrizValidos);
printf("\n");
//Cargamos el arreglo dato
printf("Que palabra desea buscar? ");
fflush(stdin);
gets(dato);
printf("\n");
///BUSCANDO EL DATO:
int datoEncontrado = buscarDatoMatrizString(matrizPalabras, matrizValidos, dato);

if(datoEncontrado == 1){
    printf("DATO ENCONTRADO: %s ", dato);
    printf("\n");
}else{
    printf("DATO NO ENCONTRADO :C");
    printf("\n");
}
*/
/**10-Hacer una función que determine si un string se encuentra dentro de un arreglo de strings
ordenado alfabéticamente. La función recibe el arreglo, la cantidad de palabras que contiene y
el string a buscar.  ///devuelve el índice de la fila en que se encuentra, de lo contrario -1*/
char matriz[20][col];
char datoBuscar[20];
///CARGAMOS LA MATRIZ DE STRINGS.
int validosStrings = cargarMatrizStrings(matriz, 20);
printf("\n");
///MOSTRAMOS LA MATRIZ CON STRINGS
printf("MOSTRANDO LA MATRIZ: \n");
mostrarMatrizStrings(matriz, validosStrings);
printf("\n");
///Cargamos el arreglo datoBuscar
printf("Que palabra desea buscar? ");
fflush(stdin);
gets(datoBuscar);
printf("\n");
int posicionDondeSeEncuentra = buscarPalabraMatrizString(matriz, 20, datoBuscar);
printf("Se encuentra en el indice de la fila N: %i", posicionDondeSeEncuentra);
printf("\n");

/**11-Hacer una función (o varias) que ordene un arreglo de palabras por orden alfabético.
 (Por selección o inserción, el que más te guste).*/

/**12-Hacer una función que retorne el determinante de una matriz de 2x2.*/
/*
int matriz[2][2];
cargarMatrizInt(matriz[][col], 2);
*/

}
///FUNC EJERCICIO 1: CARGAR MATRIZ
void cargarMatrizInt(int matrix[][col], int dimF){
    int i, j; // i: Filas, j:Columnas. VARIABLES CONTADORAS
    for(i = 0; i < dimF; i++){//FOR DE LAS FILAS. Nos va a ir cambiando la fila
            printf("FILA NUMERO: %i \n", i); //NOS VA A IR CONTANDO LAS FILAS

        for(j = 0; j < col; j++){//FOR DE LAS COLUMNAS
            printf("Ingrese un dato %i:\n",j);
            fflush(stdin);
            scanf("%i", &matrix[i][j]);
        }
    }

}
///FUNC EJERCICIO 2: MOSTRAR MATRIZ
void mostrarMatrizInt(int matrix[][col], int dimF){
    int i, j;
    for(i = 0; i < dimF; i++){
        for(j = 0; j < col; j++){
            printf("|%i|", matrix[i][j]);
        }
        printf("\n");
    }
}
///FUNC EJERCICIO 3: CARGAR MATRIZ RAND
void cargarMatrizRand(int matrix[][col], int dimF){
    int i, j;
    srand(time(NULL));
    printf("CARGANDO MATRIZ...\n");
    printf("\n");
    for(i = 0; i < dimF; i++){//FOR DE LAS FILAS. Nos va a ir cambiando la fila
        for(j = 0; j < col; j++){//FOR DE LAS COLUMNAS
            matrix[i][j] = rand()%100;
        }
    }
}
///FUNC EJERCICIO 4: SUMANDO TODOS LOS VALORES DE UNA MATRIZ.
int sumarMatrizInt(int matriz[][col], int dimF){
int i, j;
int acumulador = 0;
for(i = 0; i < dimF; i++){//FOR DE LAS FILAS. Nos va a ir cambiando la fila
        for(j = 0; j < col; j++){//FOR DE LAS COLUMNAS
            acumulador = acumulador + matriz[i][j];
        }
    }
    return acumulador;
}
///FUNC EJEERCICIO 5: SACANDO EL PROMEDIO DE UNA MATRIZ.
float promedioMatriz(int matriz[][col], int dimF, int suma){
    int i,j;
    int cantidadElementos;
    float promedio;
    cantidadElementos = dimF * col;
    promedio = suma / cantidadElementos;
    return promedio;
}
///FUN EJERCICIO 6: BUSCAR DATO
int buscarDato(int matriz[][col], int dimF, int dato){
    int i, j;
    int flag = 0;
    for(i = 0; i < dimF; i++){
        for(j = 0; j < col; j++){
            if(matriz[i][j] == dato){
                    flag = 1;
            }
        }
    }
    return flag;
}

///FUNC EJERCICIO 7: CARGAR MATRIZ CHAR
int cargarMatrizChar(char matrix[][col], int dimF){
    int i, j; // i: Filas, j:Columnas. VARIABLES CONTADORAS
    for(i = 0; i < dimF; i++){//FOR DE LAS FILAS. Nos va a ir cambiando la fila
            printf("FILA NUMERO: %i \n", i); //NOS VA A IR CONTANDO LAS FILAS

        for(j = 0; j < col; j++){//FOR DE LAS COLUMNAS
            printf("Ingrese una letra:\n");
            fflush(stdin);
            scanf("%c", matrix[i][j]);
        }
    }
return i;
}
///FUNC EJERCICIO 8: MOSTRAR MATRIZ CHAR
void mostrarMatrizChar(char matrix[][col], int dimF){
    int i, j;
    for(i = 0; i < dimF; i++){
        for(j = 0; j < col; j++){
                printf("| %c |", matrix[i][j]);
        }
        printf("\n");
        printf("\n");
    }
}

///FUN EJERCICIO 9: CARGAR MATRIZ DE STRING
int cargarMatrizStrings(char matrix[][col], int filas){
    char eleccion = 's';
    int i = 0;

    while(i < filas && eleccion == 's'){
        printf("Ingrese una palabra: \n");
        fflush(stdin);
        gets(matrix[i]);

        printf("Seguis? pulsa 's'\n");
        fflush(stdin);
        scanf("%c", &eleccion);

        i++;
    }
return i;
}
///FUNC EJERCICIO 9: MOSTRAMOS LA MATRIZ DE STRINGS
void mostrarMatrizStrings(char matrix[][col], int filas){
    int i;
    for(i = 0; i < filas; i++){
        printf("%s \n", matrix[i] );

    }
}
///FUNC EJERCICIO 9: BUSCAR UNA PALABRA EN UNA MATRIZ
int buscarDatoMatrizString(char matrix[][col], int filas, char dato[]){
    int i;
    int flag = 0;
    for(i = 0; i < filas; i++){
        if(strcmp(matrix[i], dato) == 0) {
            flag = 1;
        }
    }
return flag;
}
///FUNC EJERCICIO 10: DEVUELVE EL INDICE DE LA FILA DONDE SE ENCUENTRA:
int buscarPalabraMatrizString(char matrix[][col], int filas, char dato[]){
    int i;
    int filaDondeSeEncuentra;
    for(i = 0; i < filas; i++){
           filaDondeSeEncuentra  = strcmp(matrix[i], dato);
        }
        return filaDondeSeEncuentra;
    }

