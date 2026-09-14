CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++14
TARGET = programa_eventos

all: $(TARGET)

$(TARGET): main.o Evento.o GestorDeEventos.o
	$(CXX) $(CXXFLAGS) -o $(TARGET) main.o Evento.o GestorDeEventos.o

main.o: main.cpp GestorDeEventos.h
	$(CXX) $(CXXFLAGS) -c main.cpp

Evento.o: Evento.cpp Evento.h
	$(CXX) $(CXXFLAGS) -c Evento.cpp

GestorDeEventos.o: GestorDeEventos.cpp GestorDeEventos.h Evento.h
	$(CXX) $(CXXFLAGS) -c GestorDeEventos.cpp

clean:
	rm -f *.o $(TARGET)
