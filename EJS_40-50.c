#include<stdio.h>
#include<stdlib.h>
#include<string.h>

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




int main(){
    system("cls");
    ej46();
}