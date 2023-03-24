#include <iostream>
#include <string>

void holaMundo() {
    std::cout << "¡Hola mundo!" << std::endl;
}

void calculadoraDeMultiplos() {
    int numeroEntero;

    std::cout << "Ingrese un número entero: ";
    std::cin >> numeroEntero;

    for (int i = 1; i <= 10; i++) {
        std::cout << numeroEntero << " x " << i << " = " << numeroEntero * i << std::endl;
    }
}

void aceleracionDeVehiculo() {
    float velocidadInicial;

    std::cout << "Ingrese la velocidad inicial: ";
    std::cin >> velocidadInicial;

    float velocidadFinal;

    std::cout << "Ingrese la velocidad final: ";
    std::cin >> velocidadFinal;

    float tiempo;

    std::cout << "Ingrese el tiempo ";
    std::cin >> tiempo;

    std::cout << "La aceleracion del vehiculo es de " << ((velocidadFinal - velocidadInicial) / tiempo);
}

int main() {
    int opcion;
    std::cout << "Ingrese una opción (0 -> 'hola mundo', 1 -> 'calculadora de multiplos', 2 -> 'aceleracion de vehiculo'): ";
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
    else {
        std::cout << "Opción inválida." << std::endl;
    }

    return EXIT_SUCCESS;
}
