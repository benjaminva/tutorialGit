/**
 * @file JuegoMesa.cpp
 * @brief Implementación de la clase JuegoMesa.
 * @author Benjamín Valdés
 */

#include "JuegoMesa.h"
#include <sstream>

/**
 * @brief Constructor por defecto de Juego.
 */
JuegoMesa::JuegoMesa() : Juego(), alto(0.0), ancho(0.0), largo(0.0){}

/**
 * @brief Constructor con parámetros.
 */
JuegoMesa::JuegoMesa(const std::string& nombre, const std::string& fecha,
      int jugadores, float precio, const std::string& compania,
      float alto, float ancho, float largo) :
      Juego(nombre, fecha, jugadores, precio, compania),
      alto(alto), ancho(ancho), largo(largo){}

// modificadores de atributos
void JuegoMesa::setAlto(float alto){
  this->alto = alto;
}

void JuegoMesa::setAncho(float ancho){
  this->ancho = ancho;
}

void JuegoMesa::setLargo(float largo){
  this->largo = largo;
}

// métodos de acceso
float JuegoMesa::getAlto() const {
  return alto;
}

float JuegoMesa::getAncho() const{
  return ancho;
}

float JuegoMesa::getLargo() const{
  return largo;
}

std::string JuegoMesa::toString() const{
  std::stringstream ss;
  ss << "Nombre: " << nombre << std::endl <<
         "Fecha de lanzamiento: " << fecha << std::endl <<
         "Jugadores: " << jugadores << std::endl <<
         "Precio: $" << precio << std::endl <<
         "Compañía: " << compania << std::endl <<
         "Alto: "<< alto  << std::endl <<
         "Ancho: "<< ancho << std::endl <<
         "Largo: " << largo << std::endl;
  return ss.str();
}
