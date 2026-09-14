#include <iostream>
#include <string>
#include "GestorDeEventos.h"

int main() {
    GestorDeEventos gestor;
    int opcion = 0;
    std::string fecha, titulo;

    do {
        std::cout << "\n=== MENU DE EVENTOS ===\n";
        std::cout << "1. Agregar un evento\n";
        std::cout << "2. Listar eventos\n";
        std::cout << "3. Eliminar un evento\n";
        std::cout << "4. Salir\n";
        std::cout << "Seleccione una opcion: ";
        std::cin >> opcion;
        std::cin.ignore();

        switch (opcion) {
            case 1:
                std::cout << "Ingrese la fecha del evento: ";
                std::getline(std::cin, fecha);
                std::cout << "Ingrese el titulo del evento: ";
                std::getline(std::cin, titulo);
                gestor.agregar(fecha, titulo);
                std::cout << "Evento agregado exitosamente.\n";
                break;

            case 2:
                gestor.listar();
                break;

            case 3: {
                int indice;
                gestor.listar();
                std::cout << "Ingrese el numero del evento a eliminar: ";
                std::cin >> indice;
                std::cin.ignore();
                if (gestor.eliminar(indice)) {
                    std::cout << "Evento eliminado exitosamente.\n";
                } else {
                    std::cout << "No se pudo eliminar el evento.\n";
                }
                break;
            }

            case 4:
                std::cout << "Saliendo del programa...\n";
                break;

            default:
                std::cout << "Opcion invalida. Intente de nuevo.\n";
                break;
        }
    } while (opcion != 4);

    return 0;
}
