/**
 * @file JuegoMesa.h
 * @brief Definición de la clase JuegoMesa.
 * @author Benjamín Valdés
 */

#ifndef VIDEOJUEGO_H
#define VIDEOJUEGO_H

#include "JuegoP.h"

/**
 * @class VideoJuego
 * @brief Representa un juego de mesa, derivado de la clase Juego,
 * con dimensiones físicas.
 */
class VideoJuego : public Juego {
private:
    std::string consola;  ///< Consola del juego de video

public:
    /**
    * @brief Constructor por defecto de VideoJuego.
    */
    VideoJuego();

    /**
     * @brief Constructor con parámetros.
     * @param nombre Nombre del juego.
     * @param fecha Fecha de lanzamiento.
     * @param jugadores Número de jugadores.
     * @param precio Precio del juego.
     * @param compania Compañía desarrolladora.
     * @param consola Consola del video juego.
     */
    VideoJuego(const std::string& nombre, const std::string& fecha,
      int jugadores, float precio, const std::string& compania,
      const std::string& consola );

    /**
     * @brief Establece la consola del juego.
     * @param consola Nueva consola del juego.
     */
    void setConsola(const std::string& consola);

    /**
     * @brief Devuelvela consonla
     * @return Cadena con la consola.
     */
    std::string getConsola() const;

    /**
     * @brief Devuelve una representación en cadena de la información del juego.
     * @return Cadena con la información del juego.
     */
    std::string toString() const;
};

#endif // VIDEOJUEGO_H
