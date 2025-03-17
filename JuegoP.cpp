/**
 * @file Juego.cpp
 * @brief Implementación de la clase Juego.
 * @author Benjamín Valdés
 */

#include "JuegoP.h"
#include <sstream>

/**
 * @brief Constructor por defecto de Juego.
 */
Juego::Juego() : nombre(""), fecha(""), jugadores(0), precio(0.0), compania("") {}

/**
 * @brief Constructor con parámetros.
 */
Juego::Juego(const std::string& nombre, const std::string& fecha, int jugadores, float precio, const std::string& compania)
    : nombre(nombre), fecha(fecha), jugadores(jugadores), precio(precio), compania(compania) {}


/**
 * @brief Establece el nombre del juego.
 */
void Juego::setNombre(const std::string& nombre) {
    this->nombre = nombre;
}

/**
 * @brief Establece la fecha de lanzamiento del juego.
 */
void Juego::setFecha(const std::string& fecha) {
    this->fecha = fecha;
}

/**
 * @brief Establece el número de jugadores del juego.
 */
void Juego::setJugadores(int jugadores) {
    this->jugadores = jugadores;
}

/**
 * @brief Establece el precio del juego.
 */
void Juego::setPrecio(float precio) {
    this->precio = precio;
}

/**
 * @brief Establece la compañía desarrolladora del juego.
 */
void Juego::setCompania(const std::string& compania) {
    this->compania = compania;
}

/**
 * @brief Obtiene el nombre del juego.
 */
std::string Juego::getNombre() const {
    return nombre;
}

/**
 * @brief Obtiene la fecha de lanzamiento del juego.
 */
std::string Juego::getFecha() const {
    return fecha;
}

/**
 * @brief Obtiene el número de jugadores del juego.
 */
int Juego::getJugadores() const {
    return jugadores;
}

/**
 * @brief Obtiene el precio del juego.
 */
float Juego::getPrecio() const {
    return precio;
}

/**
 * @brief Obtiene la compañía desarrolladora del juego.
 */
std::string Juego::getCompania() const {
    return compania;
}

/**
 * @brief Devuelve una representación en cadena de la información del juego.
 */
std::string Juego::toString() const {
  std::stringstream ss;
  ss << "Nombre: " << nombre << "\n" <<
         "Fecha de lanzamiento: " << fecha << "\n" <<
         "Jugadores: " << std::to_string(jugadores) << "\n" <<
         "Precio: $" << std::to_string(precio) << "\n" <<
         "Compañía: " << compania << "\n";
  return ss.str();
}
