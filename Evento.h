#ifndef EVENTO_H
#define EVENTO_H

#include <string>

class Evento {
private:
    std::string fecha;
    std::string titulo;

public:
    Evento(const std::string& f, const std::string& t);

    std::string getFecha() const;
    std::string getTitulo() const;
};

#endif
