#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <windows.h>

//  EJ 41
int ej41(){
    int cant;
    float num, suma = 0;

    printf("Ingresa la cantidad de numeros a ingresar: ");
    scanf("%d", &cant);

    for(int i = 0; i < cant; i++){
        printf("Ingrese el numero %d: ", i+1);
        scanf("%f", &num);
        suma += num;
    }

    float promedio = (suma / cant);
    printf("El promedio es de: %.2f", promedio);

    return 0;
}

//  EJ 42
int ej42(){
    int num;

    printf("Ingrese el numero: ");
    scanf("%d", &num);

    while(num != 0){
        if(num < 0) {
            printf("ERROR, el numero debe ser mayor que cero.\n");
            
        }
        
        else{
            num *= num;
            printf("El cuadrado del numero es: %d\n", num);
        }

        printf("\nIngrese el numero: ");
        scanf("%d", &num);
    }
    
    exit(0);

}

//  EJ 43
int ej43(){
    int num, pos = 0, neg = 0;

    for(int i = 0; i < 10; i++){
        printf("Ingrese el numero %d: ", i+1);
        scanf("%d", &num);
        
        // El if verifica que no sea cero, en caso de cumplirse
        // Se usa el operador condicional para aumentar contadores
        if (num != 0) num > 0 ? pos++ : neg++;
    }

    printf("\nPositivos: %d", pos);
    printf("\nNegativos: %d", neg);
}

// EJ 44

// a.
int ej44_A(){
    int num;

    do {
        printf("Ingrese un caracter: ");
        scanf("%d", &num);
    } while (num < 1 || num > 5 );

    printf("\n\nNice.");
    
    return 0;
}

// b.
int ej44_B(){
    int num;
    char car;

    do {
        printf("Ingrese un caracter: ");
        // Recibe un dato con tipo char.
        car = getchar();

        // Si es un digito, lo pasa a entero
        if (car >= '0' && car <= '9'){
            num = car - '0';
        } else {
            while (getchar() != '\n'){
                // Se resetea num con un valor inválido
                num = -1;
            }
        }

    } while (num < 1 || num > 5 );

    printf("\n\nNice.");
    
    return 0;
}

// EJ 45
int ej45(){
    int contA = 0, contV = 0;
    char c;

    for (int i = 0; i < 20; i++){
        printf("Ingrese el caracter Nro %d: ", i+1);


        // Se lee el caracter, si es un \n se lee de nuevo, el while está vacio
        while ((c = getchar()) == '\n');

        switch (c)
        {
        case 'a':
            contA++;
            break;
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            contV++;
            break;
        
        default:
            break;
        }
    }

    printf("\nCant 'A's:\t %d \nCant vocales:\t %d", contA, contV);

    return 0;
}

int ej45B(){
    char str[20];
    int contA = 0, contV = 0;

    printf("Ingrese el string: ");    
    scanf("%s", &str);

    for (int i = 0; i < strlen(str); i++){
        
        switch (str[i])
        {
        case 'a':
            contA++;
            break;

        case 'e':
        case 'i':
        case 'o':
        case 'u':
            contV++;
            break;

        default:
            break;
        }
    }

    printf("\nCant 'A's:\t %d \nCant vocales:\t %d", contA, contV);

    return 0;
}

// Permita ingresar un número correspondiente a los días de una semana y muestre el nombre del día.
int ej46(){
    char week[7][10] = {"Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sabado", "Domingo"};
    int num = 1;
    
    printf("Ingrese el numero (0 para salir): ");
    scanf("%d", &num);
    while (num != 0){
        printf("El dia de la semana es: %s", week[num-1]);
        printf("\nIngrese el numero (0 para salir): ");
        scanf("%d", &num);
    }
}

// Números pares entre el 1 y el 100 a razón de 6 por línea separados por 3 blancos.
int ej47(){
    int j = 0, i = 0;
    for (i; i <= 100; i++){
        if (i % 2 == 0){
            printf("%d\t", i);
            j++;
        }
        if (j == 6) {
            printf("\n\n\n");
            j = 0;
        }
        

    }
        printf("\n\n\n");
}

// Programa que muestre los múltiplos de 2 y de 3 y de ambos comprendidos entre 1 y 100.
int ej48(){
    for(int i = 0; i <= 100; i++){
        if(i % 3 == 0 && i % 2 == 0){
            printf("%d ", i);
        }
    }
}

// algoritmo que muestre todos los números pares que hay desde la unidad hasta un número que introducimos por teclado.
int ej49(){
    int num;

    do{
        printf("Ingrese un numero (0 para salir): ");
        scanf("%d", &num);

        for(int i = 1; i <= num; i++){
            if (i % 2 == 0){
                printf("\n%d", i);
            }
        }
        printf("\n\n");
    } while(num != 0);
}

// Muestre los números primos comprendidos entre 0 y 100.
int ej50(){
    int cont = 0;
    for (int i = 2; i <= 100; i++){
        for (int j = 1; j <= i; j++){
            if (i % j == 0) cont++;
        }
        if (cont <= 2) printf("%d\n", i);
        cont = 0;
    }
}

/*
Codificar en C un algoritmo que permita ingresar 10 números, ninguno de ellos igual a
cero. Se pide sumar los positivos, obtener el producto de los negativos y luego mostrar
ambos resultados
*/
int ej51(){
    int nums[10], n, suma = 0, prod = 1;

    for (int i = 0; i < 10; i++){
        printf("Ingrese un numero: ");
        scanf("%d", &n);

        while (n == 0){
            printf("\nERROR.\nIngrese un numero: ");
            scanf("%d", &n);
        }

        if(n > 0) suma += n;
        else prod *= n;

        nums[i] = n;
    }

    printf("\nSUMA:\t %d", suma);
    printf("\nPROD:\t %d", prod);
}

// Calcular la media de los números no negativos de una lista de n números ingresados por teclado 
int ej52(){
    int n, num, cant = 0, total = 0;

    printf("Ingrese la cantidad de numeros: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        printf("Ingrese un numero: ");
        scanf("%d", &num);

        if(num >= 0){
            total += num;
        }
    }

    float promedio = (float)total/n;
    printf("La media de los numeros ingresados es: %.2f", promedio);
}

// Dados 3 números donde el primero y el último son límites de un intervalo, indicar si el tercero pertenece a dicho intervalo
int ej53(){
    int a,b,c;

    printf("Ingrese el primer numero: ");
    scanf("%d", &a);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &b);
    printf("Ingrese el tercer numero: ");
    scanf("%d", &c);

    // Alternativa facha
    // a < b && b < c ? printf("El segundo numero pertenece al intervalo.") : printf("El segundo numero NO pertenece al intervalo.");
    
    if (a < b && b < c) {
        printf("El segundo numero pertenece al intervalo.");
    }
    else{
        printf("El segundo numero NO pertenece al intervalo.");
    }
}

// Realizar la tabla de multiplicar de un número entre 0 y 10 
int ej54(){
    int num;

    printf("Ingrese el numero entre 0 y 10: ");
    scanf("%d", &num);

    while(num < 0 || num > 10){
        printf("\nERROR.\nIngrese el numero entre 0 y 10: ");
        scanf("%d", &num);
    }

    for (int i = 1; i <= 10; i++){
        printf("\n%d x %d = %d", num, i, num*i);
    }
}

// Algoritmo que muestre el mayor y el menor de una serie de 5 números que vamos introduciendo por teclado
int ej55(){
    int n, min, max = 0;
    
    for (int i = 0; i < 5; i++){
        printf("Ingrese un numero: ");
        scanf("%d", &n);

        if (i == 0) min = n;
        if (n > max) max = n;
        if (n < min) min = n;
    }

    printf("\nMinimo: %d", min);
    printf("\nMaximo: %d", max);
}

// Escribir un programa que solicite el ingreso de un número entero y a partir de él, genere
// una cuenta regresiva hasta cero, mostrando los sucesivos valores hasta el último luego
// de lo cual emitirá un pitido

int ej56(){
    int n;

    do{
    printf("Ingrese un numero mayor a cero: ");
    scanf("%d", &n);
    } while (n <= 0);

    for (n; n > 0; n--){
        printf("%d \n", n);
        Sleep(100 * n);
    }
    Beep(523, 800);
}

int ej57(){
    printf("Dec \t|\t Char");
    printf("\n-----------------\n");

    for (int i = 0; i < 127; i++){
        printf("%d \t|\t %c \n", i, i);    
    }
}


int main(){
    system("cls");
    ej57();

    return 0;
}