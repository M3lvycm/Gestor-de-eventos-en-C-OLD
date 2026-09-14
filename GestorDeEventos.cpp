#include "GestorDeEventos.h"
#include <iostream>

void GestorDeEventos::agregar(const std::string& fecha, const std::string& titulo) {
    listaDeEventos.push_back(std::make_unique<Evento>(fecha, titulo));
}

void GestorDeEventos::listar() const {
    if (listaDeEventos.empty()) {
        std::cout << "No hay eventos registrados." << std::endl;
        return;
    }

    std::cout << "--- Lista de Eventos ---" << std::endl;
    for (size_t i = 0; i < listaDeEventos.size(); i++) {
        std::cout << i + 1 << ". Fecha: " << listaDeEventos[i]->getFecha()
                  << " | Titulo: " << listaDeEventos[i]->getTitulo() << std::endl;
    }
}

bool GestorDeEventos::eliminar(int indice) {
    if (indice < 1 || indice > (int)listaDeEventos.size()) {
        return false;
    }
    listaDeEventos.erase(listaDeEventos.begin() + (indice - 1));
    return true;
}
