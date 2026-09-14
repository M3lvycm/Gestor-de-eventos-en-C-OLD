#include "Evento.h"

Evento::Evento(const std::string& f, const std::string& t) : fecha(f), titulo(t) {}

std::string Evento::getFecha() const {
    return fecha;
}

std::string Evento::getTitulo() const {
    return titulo;
}
