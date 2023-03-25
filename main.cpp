#include <iostream>
#include <string>

void holaMundo() {
    std::cout << "¡Hola mundo!" << std::endl;
}

void calculadoraDeMultiplos() {
    int numeroEntero;

    std::cout << "Ingrese un número entero: " << std::endl;
    std::cin >> numeroEntero;

    for (int i = 1; i <= 10; i++) {
        std::cout << numeroEntero << " x " << i << " = " << numeroEntero * i << std::endl;
    }
}

void aceleracionDeVehiculo() {
    float velocidadInicial;

    std::cout << "Ingrese la velocidad inicial: " << std::endl;
    std::cin >> velocidadInicial;

    float velocidadFinal;

    std::cout << "Ingrese la velocidad final: " << std::endl;
    std::cin >> velocidadFinal;

    float tiempo;

    std::cout << "Ingrese el tiempo " << std::endl;
    std::cin >> tiempo;

    std::cout << "La aceleracion del vehiculo es de " << ((velocidadFinal - velocidadInicial) / tiempo);
}

void sentenciasIfElse() {
    int edad;

    std::cout << "Ingrese la edad de su hijo: " << std::endl;
    std::cin >> edad;

    if (edad >= 0 && edad <= 6) {
        std::cout << "Pertenece al grupo de la primera infancia" << std::endl;
    } else if (edad > 6 && edad <= 12) {
        std::cout << "Pertenece al grupo de la segunda infancia" << std::endl;
    } else if (edad > 12 && edad <= 18) {
        std::cout << "Pertenece al grupo de adolescentes" << std::endl;
    } else {
        std::cout << "La edad ingresada no es válida" << std::endl;
    }
}

void sentenciasAnidadas() {
    float nota1, nota2, nota3, nota4, promedio;
    int continuar = 1; // Iniciamos la variable continuar en 1 para que entre al while

    while (continuar) { // Mientras continuar sea diferente de cero (0) se ejecutará el ciclo
        std::cout << "Ingrese la nota 1: ";
        std::cin >> nota1;
        std::cout << "Ingrese la nota 2: ";
        std::cin >> nota2;
        std::cout << "Ingrese la nota 3: ";
        std::cin >> nota3;
        std::cout << "Ingrese la nota 4: ";
        std::cin >> nota4;

        promedio = (nota1 + nota2 + nota3 + nota4) / 4.0;

        if (promedio >= 3.5 && promedio <= 5.0) {
            std::cout << "Aprobado" << std::endl;
        } else if (promedio >= 3.0 && promedio < 3.5) {
            std::cout << "En este momento no tiene aprobada la materia de tecnología, pero tiene la oportunidad de recuperar." << std::endl;
        } else if (promedio < 3.0) {
            std::cout << "No aprobado" << std::endl;
        } else {
            std::cout << "El promedio ingresado no es válido" << std::endl;
        }

        std::cout << "Desea ingresar las notas de otro estudiante? (1=si, 0=no): ";
        std::cin >> continuar; // Pedimos al usuario que ingrese la opción de continuar o no
    }

    //Nombre: Jose Luciano Mejia Arias
}

void sentenciasDeRepeticion1() {
    int cantidad_notas;
    float nota, suma_notas = 0.0, promedio;

    std::cout << "Ingrese la cantidad de notas a digitar: ";
    std::cin >> cantidad_notas;

    for (int i = 1; i <= cantidad_notas; i++) {
        std::cout << "Ingrese la nota #" << i << ": ";
        std::cin >> nota;

        // Verificar que la nota está dentro del rango permitido
        if (nota < 0.0 || nota > 5.0) {
            std::cout << "La nota ingresada no es válida. Ingrese una nota entre 0.0 y 5.0." << std::endl;
            i--; // Disminuir el valor de i para que el usuario ingrese la nota nuevamente
        } else {
            suma_notas += nota;
        }
    }

    promedio = suma_notas / cantidad_notas;
    std::cout << "El promedio de las notas digitadas es: " << promedio << std::endl;
}
void sentenciasDeRepeticion2() {
    sentenciasAnidadas();
}

int main() {
    int opcion;
    std::cout << "Ingrese una opción (0 -> 'hola mundo', 1 -> 'calculadora de multiplos', 2 -> 'aceleracion de vehiculo'), 3 -> 'sentencias if-else', 4 -> 'sentencias anidadas', 5 -> 'sentencias de repeticion #1', 6 -> 'sentencias de repeticion #2': " << std::endl;
    std::cin >> opcion;

    if (opcion == 0) {
        holaMundo();
    }
    else if (opcion == 1) {
        calculadoraDeMultiplos();
    }
    else if (opcion == 2) {
        aceleracionDeVehiculo();
    }
    else if (opcion == 3) {
        sentenciasIfElse();
    }
    else if (opcion == 4) {
        sentenciasAnidadas();
    }
    else if (opcion == 5) {
        sentenciasDeRepeticion1();
    }
    else if (opcion == 6) {
        sentenciasDeRepeticion2();
    }
    else {
        std::cout << "Opción inválida." << std::endl;
    }

    return EXIT_SUCCESS;
}
