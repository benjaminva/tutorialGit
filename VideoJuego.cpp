/**
 * @file VideoJuego.cpp
 * @brief Implementación de la clase VidoeJuego.
 * @author Benjamín Valdés
 */

#include "VideoJuego.h"
#include <sstream>
/**
 * @brief Constructor por defecto de Juego.
 */
VideoJuego::VideoJuego() : Juego(), consola(""){}

/**
 * @brief Constructor con parámetros.
 */
VideoJuego::VideoJuego(const std::string& nombre, const std::string& fecha,
      int jugadores, float precio, const std::string& compania,
      const std::string& consola) :
      Juego(nombre, fecha, jugadores, precio, compania),
      consola(consola){}

// modificadores de atributos
void VideoJuego::setConsola(const std::string& consola) {
  this->consola = consola;
}

// métodos de acceso
std::string VideoJuego::getConsola() const{
  return consola;
}

std::string VideoJuego::toString() const{
  std::stringstream ss;
  ss << "Nombre: " << nombre << std::endl <<
         "Fecha de lanzamiento: " << fecha << std::endl <<
         "Jugadores: " << jugadores << std::endl <<
         "Precio: $" << precio << std::endl <<
         "Compañía: " << compania << std::endl <<
         "Consola: "<< consola << std::endl;
  return ss.str();
}
