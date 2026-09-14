#ifndef GESTORDEEVENTOS_H
#define GESTORDEEVENTOS_H

#include <vector>
#include <memory>
#include <string>
#include "Evento.h"

class GestorDeEventos {
private:
    std::vector<std::unique_ptr<Evento>> listaDeEventos;

public:
    void agregar(const std::string& fecha, const std::string& titulo);
    void listar() const;
    bool eliminar(int indice);
};

#endif
