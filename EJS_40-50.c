#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <windows.h>

int ej35b(){
  char caracter;

  while ((caracter = getchar()) != EOF){}

  printf("\nFin de ingreso de texto.\n");
  return 0;
}

int alba(){
    char caracter, str[100];

    for (int i = 0; caracter = getchar() != '*'; i++){
        str[i] = caracter;
    }
    printf("%s", str);

}


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

int ej63(){
    int strInt[1000], num, suma = 0;

    for(int i = 0; i < 1000; i++){
        printf("Ingrese el numero %d: ", i+1);
        scanf("%d", &strInt[i]);
    }

    printf("Ingrese el numero: ");
    scanf("%d", &num);

    for(int i = 0; i < 1000; i++){
        if (strInt[i] >= num){
            suma += strInt[i];
        }
    }

    printf("La sumatoria de los numeros mayores que %d es: %d", num, suma);
}

//ej 85
struct alumno{
    char apellido[20];
    int nota;
    int legajo;
};

void ej85(){
    int leg, opc = 1, nota;
    char name[20];
    struct alumno alumnos[8];
    
    for (int i = 0; i < 8; i++){
        
        printf("\nIngrese el apellido del alumno numero %i: ", i+1);
        scanf("%s", &name);    
        strcpy(alumnos[i].apellido, name);
        
        printf("Ingrese su legajo: ", i+1);
        scanf("%d", &leg);    
        alumnos[i].legajo = leg;
        
        printf("Ingrese su nota: ", i+1);
        scanf("%d", &leg);    
        alumnos[i].nota = leg;
        
    }
    
    
     while (opc != 0){
        printf("Desea cambiar algo? (1/0): ");
        scanf("%d", &opc);
        
        if (opc == 1){
            printf("Ingrese el legajo: ");
            scanf("%d", &leg);
            
            for (int i = 0; i < 8; i++){
                if (alumnos[i].legajo == leg){
                    printf("Ingrese la nueva nota de %s: ", alumnos[i].apellido);
                    scanf("%d", &nota);
                    alumnos[i].nota = nota;
                    }
            }
        }
     }
        
    printf("\n");
    for (int i = 0; i < 8; i++){
        printf("Alumno %d: \n\tNombre: \t%s \n\tLegajo: \t%d \n\tNota: \t\t%d \n", i+1, alumnos[i].apellido, alumnos[i].legajo, alumnos[i].nota);
    }    
}


// Ej 87
int cubo (int base){
    return base*base*base;
}

void ej87(){
    int num;

    do{
        printf("Ingrese un numero entre 1 y 5: ");
        scanf("%d", &num);
    } while (num < 1 || num > 5);
    
    printf("El cubo de %d es: %d", num, cubo(num));
}

// Ej 90
int sumar(int a, int b){
    return a+b;
}
int restar(int a, int b){
    return a-b;
}
int mult(int a, int b){
    return a*b;
}
int dividir(int a, int b){
    return a/b;
}

int ej90(){
    int a, b, opc;
    int res;

    printf("\nIngrese un numero entre 1 y 5: ");
    scanf("%d", &a);
    printf("Ingrese un numero entre 1 y 5: ");
    scanf("%d", &b);

    printf("\n 1- SUMAR \n 2- RESTAR \n 3- MULTIPLICAR \n 4- DIVIDIR \n 5- SALIR \n\n Elija una opcion: ");
    scanf("%d", &opc);

    switch (opc){
        case 1:
            res = sumar(a,b);
            break;
        case 2:
            res = restar(a,b);
            break;
        case 3:
            res = mult(a,b);
            break;
        case 4:
            res = dividir(a,b);
            break;
        default:
            return 0;
    }
    printf("\nEl resultado es %2.f.");
    ej90();
}

// ej91()
#define pi 3.1416
float calArea(int r){
    return r * r * pi;
}
float calCirc(int r){
    return 2 * r * pi;
}

void ej91(){
    int r;
    float circ, area;

    printf("Ingrese el radio: ");
    scanf("%d", &r);

    circ = calCirc(r);
    area = calArea(r);

    printf("La circunferencia es: \t %.2f \nEl area es: \t\t %.2f", circ, area);
}

// ej 92
float media (int suma){
    return suma / 10.0;
}

int maximo(int list[10]){
    int max = 0;
    for (int i = 0; i < 10; i++){
        if (list[i] > max){
            max = list[i];
        }
    }

    return max;
}


void ej92(){
    int lista[10], max, x, suma = 0;
    float prom;

    for(int i = 0; i < 10; i++){
        printf("Ingrese el valor %d: ", i+1);
        scanf("%d", &x);
        lista[i] = x;
        suma += x;
    }
    prom = media (suma);
    max = maximo(lista);

    printf("\nLa suma es: \t\t%d", suma);
    printf("\nEl promedio es: \t%.2f", prom);
    printf("\nEl maximo valor es: \t%d", max);
}

void ej93(){    
    int arr[10] = {23, 5, 98, 65, 3, 55, 73, 9, 21, 85}, *p;
    p = arr;
    printf ( " %d\n", arr[*(p + 7)]); //R: ____________________________
    printf ( " %d\n", *arr + 3); //R: ____________________________
    printf ( " %d\n", *p++); //R: ____________________________
    printf (" %d\n", *(arr + 1)); //R: ____________________________
    printf (" %d\n", (*p)++); //R: ____________________________
    printf (" %d\n", *p); //R: ____________________________
    printf (" %d\n", *p++); //R: ____________________________
    printf (" %d\n", *p);
}

// ej98

int verificaDigitos(char *cad, int *cantD){
    int cantC = strlen(cad);
    for (int i = 0; i < cantC; i++){
        if (isdigit(cad[i])) (*cantD)++;
    }

    return cantC;
}

void ej98(){
    char cad[100];
    int cantD = 0, cantC;

    printf("Ingrese la cadena: ");
    scanf("%s", cad);

    cantC = verificaDigitos(cad, &cantD);

    printf("\nLa cantidad de digitos es: %d", cantD);
    printf("\nLa cantidad de alfanumericos es: %d", cantC);
}

// ej99
char * verif (char *);

void ej99(){
    char cad[100];
    printf("Ingrese la cadena: ");
    scanf("%s", &cad);

    printf("%s", verif(cad));
}

char * verif (char * cad){
    for (int i = 0; i < strlen(cad); i++){
        if (isdigit(cad[i])) return "NO";
    }
    return "SI";
}

//ej 100
void carga(char *, int *);
void esVocal(char, int *);
int esConsonante(char);

void ej100(){
    char cad[100];
    int cont = 0;

    
    carga(cad, &cont);
    printf("%s", cad);
}

void carga(char *cad, int *cont){
    printf("Ingrese la cadena: ");

    for(*cont = 0; *cont <= 999 && (cad[*cont] = getchar()) != EOF; *cont++);
    cad[*cont] = '\0';
}


// ej101

char* carga101 (int *);
char* cambia_texto (char *, int);

void ej101(){
    int cont;
    char *pcad, *changePcad;

    pcad = carga101(&cont);
    changePcad = cambia_texto(pcad, cont);

    printf ("\nEl texto: %s\n", pcad);
    printf ("\ncambiado se lee: %s\n", changePcad);
    system ("pause");

}

char* carga101 (int *cont){
    static char cad [100];
    *cont = 0;
    printf("(101) Ingrese la cadena: ");
    while (*cont <= 99 && (cad[*cont] = getchar()) != EOF){
        *cont++;
    }
    cad[*cont] = '\0';

    return cad;

}

char* cambia_texto (char *cad, int cont){
    static char cambiada[100];

    for (int i = 0; i < strlen(cad); i++){
        if (isdigit(cad[i])) cambiada[i] = '*';
    }

    return cambiada;
}




int main() {
    ej101();
}
